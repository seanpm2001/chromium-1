Index: chrome/browser/intranet_redirect_detector.h
--- chrome/browser/intranet_redirect_detector.h.orig
+++ chrome/browser/intranet_redirect_detector.h
@@ -27,7 +27,7 @@ class SimpleURLLoader;
 class PrefRegistrySimple;
 
 #if !(defined(OS_MAC) || defined(OS_WIN) || defined(OS_LINUX) || \
-      defined(OS_CHROMEOS) || defined(OS_FUCHSIA))
+      defined(OS_CHROMEOS) || defined(OS_FUCHSIA) || defined(OS_BSD))
 #error "IntranetRedirectDetector should only be built on Desktop platforms."
 #endif
 
