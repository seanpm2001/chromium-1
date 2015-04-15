--- ui/gl/sync_control_vsync_provider.cc.orig	Sat Dec 27 12:54:25 2014
+++ ui/gl/sync_control_vsync_provider.cc	Sat Dec 27 12:55:17 2014
@@ -9,7 +9,7 @@
 #include "base/logging.h"
 #include "base/time/time.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 // These constants define a reasonable range for a calculated refresh interval.
 // Calculating refreshes out of this range will be considered a fatal error.
 const int64 kMinVsyncIntervalUs = base::Time::kMicrosecondsPerSecond / 400;
@@ -35,7 +35,7 @@
 
 void SyncControlVSyncProvider::GetVSyncParameters(
     const UpdateVSyncCallback& callback) {
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   base::TimeTicks timebase;
 
   // The actual clock used for the system time returned by glXGetSyncValuesOML
