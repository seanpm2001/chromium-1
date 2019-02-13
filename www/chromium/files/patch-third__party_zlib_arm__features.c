--- third_party/zlib/arm_features.c.orig	2019-01-30 02:18:52.000000000 +0100
+++ third_party/zlib/arm_features.c	2019-02-01 14:35:44.086582000 +0100
@@ -21,9 +21,10 @@
 #include <asm/hwcap.h>
 #include <sys/auxv.h>
 #else
-#error ### No ARM CPU features detection in your platform/OS
+/* #error ### No ARM CPU features detection in your platform/OS */
 #endif
 
+#ifdef ARMV8_OS_LINUX
 static pthread_once_t cpu_check_inited_once = PTHREAD_ONCE_INIT;
 
 static void init_arm_features(void)
@@ -55,10 +56,13 @@
     if (capabilities & flag_pmull)
         arm_cpu_enable_pmull = 1;
 }
+#endif
 
 void ZLIB_INTERNAL arm_check_features(void)
 {
+#ifdef ARMV8_OS_LINUX
     pthread_once(&cpu_check_inited_once, init_arm_features);
+#endif
 }
 #else
 #include <windows.h>
