Index: content/public/common/use_zoom_for_dsf_policy.cc
--- content/public/common/use_zoom_for_dsf_policy.cc.orig
+++ content/public/common/use_zoom_for_dsf_policy.cc
@@ -26,7 +26,7 @@ const base::Feature kUseZoomForDsfEnabledByDefault{
 
 bool IsUseZoomForDSFEnabledByDefault() {
 #if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_FUCHSIA) || \
-    defined(OS_MAC)
+    defined(OS_MAC) || defined(OS_BSD)
   return true;
 #elif defined(OS_WIN) || defined(OS_ANDROID)
   return base::FeatureList::IsEnabled(kUseZoomForDsfEnabledByDefault);
