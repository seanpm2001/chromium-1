--- base/profiler/stack_sampling_profiler_unittest.cc.orig	2017-03-09 20:04:26 UTC
+++ base/profiler/stack_sampling_profiler_unittest.cc
@@ -31,7 +31,7 @@
 #include <intrin.h>
 #include <malloc.h>
 #include <windows.h>
-#else
+#elif !defined(OS_BSD)
 #include <alloca.h>
 #endif
 
