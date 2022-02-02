Index: extensions/common/features/feature.cc
--- extensions/common/features/feature.cc.orig
+++ extensions/common/features/feature.cc
@@ -34,6 +34,8 @@ Feature::Platform Feature::GetCurrentPlatform() {
   return WIN_PLATFORM;
 #elif defined(OS_FUCHSIA)
   return FUCHSIA_PLATFORM;
+#elif defined(OS_BSD)
+  return LINUX_PLATFORM;
 #else
   return UNSPECIFIED_PLATFORM;
 #endif
