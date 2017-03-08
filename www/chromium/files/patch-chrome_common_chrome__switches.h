--- chrome/common/chrome_switches.h.orig	2017-02-02 02:02:50 UTC
+++ chrome/common/chrome_switches.h
@@ -385,7 +385,7 @@ extern const char kAllowNaClSocketAPI[];
 extern const char kEnableWaylandServer[];
 #endif
 
-#if defined(OS_WIN) || defined(OS_LINUX)
+#if defined(OS_WIN) || defined(OS_LINUX) || defined(OS_BSD)
 extern const char kDisableInputImeAPI[];
 extern const char kEnableInputImeAPI[];
 #endif
