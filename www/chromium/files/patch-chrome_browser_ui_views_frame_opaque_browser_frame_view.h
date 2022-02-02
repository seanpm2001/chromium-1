Index: chrome/browser/ui/views/frame/opaque_browser_frame_view.h
--- chrome/browser/ui/views/frame/opaque_browser_frame_view.h.orig
+++ chrome/browser/ui/views/frame/opaque_browser_frame_view.h
@@ -224,7 +224,7 @@ class OpaqueBrowserFrameView : public BrowserNonClient
   // Background painter for the window frame.
   std::unique_ptr<views::FrameBackground> frame_background_;
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   std::unique_ptr<views::MenuRunner> menu_runner_;
 #endif
 
