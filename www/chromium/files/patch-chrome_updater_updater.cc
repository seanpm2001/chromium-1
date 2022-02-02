Index: chrome/updater/updater.cc
--- chrome/updater/updater.cc.orig
+++ chrome/updater/updater.cc
@@ -38,7 +38,7 @@
 #include "chrome/updater/win/win_util.h"
 #elif defined(OS_MAC)
 #include "chrome/updater/app/server/mac/server.h"
-#elif defined(OS_LINUX)
+#elif defined(OS_LINUX) || defined(OS_BSD)
 #include "chrome/updater/app/server/linux/server.h"
 #endif
 
