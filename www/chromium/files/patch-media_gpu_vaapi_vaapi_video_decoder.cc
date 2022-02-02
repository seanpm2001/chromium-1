Index: media/gpu/vaapi/vaapi_video_decoder.cc
--- media/gpu/vaapi/vaapi_video_decoder.cc.orig
+++ media/gpu/vaapi/vaapi_video_decoder.cc
@@ -771,7 +771,7 @@ void VaapiVideoDecoder::ApplyResolutionChangeWithScree
   const gfx::Size decoder_natural_size =
       aspect_ratio_.GetNaturalSize(decoder_visible_rect);
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   absl::optional<DmabufVideoFramePool::CreateFrameCB> allocator =
       base::BindRepeating(&AllocateCustomFrameProxy, weak_this_);
   std::vector<ImageProcessor::PixelLayoutCandidate> candidates = {
