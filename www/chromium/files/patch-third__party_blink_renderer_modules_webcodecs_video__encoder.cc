--- third_party/blink/renderer/modules/webcodecs/video_encoder.cc.orig	2020-11-16 14:54:56 UTC
+++ third_party/blink/renderer/modules/webcodecs/video_encoder.cc
@@ -53,7 +53,7 @@ namespace {
 std::unique_ptr<media::VideoEncoder> CreateAcceleratedVideoEncoder(
     media::VideoCodecProfile profile,
     const media::VideoEncoder::Options& options) {
-#if defined(OS_MAC) || defined(OS_LINUX)
+#if defined(OS_MAC) || defined(OS_LINUX) || defined(OS_BSD)
   // TODO(https://crbug.com/1110279) Flush() is not implemented on MacOS'
   // accelerated video encoder, so we can't use it yet.
   return nullptr;
@@ -97,7 +97,7 @@ std::unique_ptr<media::VideoEncoder> CreateAccelerated
       media::AsyncDestroyVideoEncoder<media::VideoEncodeAcceleratorAdapter>>(
       std::make_unique<media::VideoEncodeAcceleratorAdapter>(
           gpu_factories, std::move(task_runner)));
-#endif  // defined(OS_MAC) || defined(OS_LINUX)
+#endif  // defined(OS_MAC) || defined(OS_LINUX) || defined(OS_BSD)
 }
 
 std::unique_ptr<media::VideoEncoder> CreateVpxVideoEncoder() {