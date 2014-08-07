--- ./chrome/test/base/in_process_browser_test.cc.orig	2014-07-15 21:02:00.000000000 +0200
+++ ./chrome/test/base/in_process_browser_test.cc	2014-07-20 18:13:08.000000000 +0200
@@ -72,6 +72,10 @@
 
 namespace {
 
+#if defined(OS_FREEBSD)
+#include <signal.h>
+#endif
+
 // Passed as value of kTestType.
 const char kBrowserTestType[] = "browser";
 
