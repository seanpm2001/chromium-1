--- third_party/blink/renderer/modules/webgl/webgl_rendering_context_base.cc.orig	2021-07-19 18:45:22 UTC
+++ third_party/blink/renderer/modules/webgl/webgl_rendering_context_base.cc
@@ -6074,7 +6074,7 @@ void WebGLRenderingContextBase::TexImageHelperMediaVid
   constexpr bool kAllowZeroCopyImages = true;
 #endif
 
-#if defined(OS_ANDROID) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_LINUX) || defined(OS_BSD)
   // TODO(crbug.com/1175907): Only TexImage2D seems to work with the GPU path on
   // Android M -- appears to work fine on R, but to avoid regressions in <video>
   // limit to TexImage2D only for now. Fails conformance test on Nexus 5X:
