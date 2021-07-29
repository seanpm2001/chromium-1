--- chrome/browser/file_system_access/chrome_file_system_access_permission_context.cc.orig	2021-07-19 18:45:08 UTC
+++ chrome/browser/file_system_access/chrome_file_system_access_permission_context.cc
@@ -222,7 +222,7 @@ const struct {
     {base::DIR_HOME, FILE_PATH_LITERAL("Library/Mobile Documents"),
      kDontBlockChildren},
 #endif
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
     // On Linux also block access to devices via /dev, as well as security
     // sensitive data in /sys and /proc.
     {kNoBasePathKey, FILE_PATH_LITERAL("/dev"), kBlockAllChildren},
