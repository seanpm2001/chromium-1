--- ui/gl/gl_surface_glx.cc.orig	Sat Dec 27 12:54:25 2014
+++ ui/gl/gl_surface_glx.cc	Sat Dec 27 12:54:57 2014
@@ -57,7 +57,7 @@
 bool g_glx_sgi_video_sync_supported = false;
 
 static const base::TimeDelta kGetVSyncParametersMinPeriod =
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
     // See crbug.com/373489
     // On Linux, querying the vsync parameters might burn CPU for up to an
     // entire vsync, so we only query periodically to reduce CPU usage.
