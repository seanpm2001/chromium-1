--- tools/gn/args.cc.orig	2017-02-02 02:03:12 UTC
+++ tools/gn/args.cc
@@ -254,6 +254,8 @@ void Args::SetSystemVarsLocked(Scope* de
   os = "mac";
 #elif defined(OS_LINUX)
   os = "linux";
+#elif defined(OS_BSD)
+  os = "bsd";
 #elif defined(OS_ANDROID)
   os = "android";
 #elif defined(OS_NETBSD)
