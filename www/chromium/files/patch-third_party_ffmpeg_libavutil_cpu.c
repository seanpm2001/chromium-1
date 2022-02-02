Index: third_party/ffmpeg/libavutil/cpu.c
--- third_party/ffmpeg/libavutil/cpu.c.orig
+++ third_party/ffmpeg/libavutil/cpu.c
@@ -36,10 +36,7 @@
 #if HAVE_GETPROCESSAFFINITYMASK || HAVE_WINRT
 #include <windows.h>
 #endif
-#if HAVE_SYSCTL
-#if HAVE_SYS_PARAM_H
-#include <sys/param.h>
-#endif
+#if HAVE_SYSCTL && !defined(__OpenBSD__)
 #include <sys/types.h>
 #include <sys/sysctl.h>
 #endif
