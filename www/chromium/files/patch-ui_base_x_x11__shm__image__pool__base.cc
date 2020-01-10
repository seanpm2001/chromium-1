--- ui/base/x/x11_shm_image_pool_base.cc.orig	2019-12-16 21:51:33 UTC
+++ ui/base/x/x11_shm_image_pool_base.cc
@@ -12,12 +12,17 @@
 
 #include "base/bind.h"
 #include "base/callback.h"
+#include "base/command_line.h"
+#include "base/environment.h"
 #include "base/location.h"
+#include "base/strings/string_util.h"
+#include "base/system/sys_info.h"
 #include "base/threading/thread_task_runner_handle.h"
 #include "build/build_config.h"
 #include "ui/events/platform/platform_event_dispatcher.h"
 #include "ui/events/platform/platform_event_source.h"
 #include "ui/gfx/geometry/rect.h"
+#include "ui/gfx/x/x11_switches.h"
 
 namespace ui {
 
@@ -39,10 +44,14 @@ constexpr float kShmResizeShrinkThreshold =
     1.0f / (kShmResizeThreshold * kShmResizeThreshold);
 
 std::size_t MaxShmSegmentSizeImpl() {
+#if defined(OS_BSD)
+  return base::SysInfo::MaxSharedMemorySize();
+#else
   struct shminfo info;
   if (shmctl(0, IPC_INFO, reinterpret_cast<struct shmid_ds*>(&info)) == -1)
     return 0;
   return info.shmmax;
+#endif
 }
 
 std::size_t MaxShmSegmentSize() {
@@ -139,7 +148,7 @@ bool XShmImagePoolBase::Resize(const gfx::Size& pixel_
         shmctl(state.shminfo_.shmid, IPC_RMID, 0);
         return false;
       }
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
       // On Linux, a shmid can still be attached after IPC_RMID if otherwise
       // kept alive.  Detach before XShmAttach to prevent a memory leak in case
       // the process dies.
@@ -149,7 +158,7 @@ bool XShmImagePoolBase::Resize(const gfx::Size& pixel_
       if (!XShmAttach(display_, &state.shminfo_))
         return false;
       state.shmem_attached_to_server_ = true;
-#if !defined(OS_LINUX)
+#if !defined(OS_LINUX) && !defined(OS_BSD)
       // The Linux-specific shmctl behavior above may not be portable, so we're
       // forced to do IPC_RMID after the server has attached to the segment.
       // XShmAttach is asynchronous, so we must also sync.
