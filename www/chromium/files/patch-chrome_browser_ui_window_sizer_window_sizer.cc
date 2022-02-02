Index: chrome/browser/ui/window_sizer/window_sizer.cc
--- chrome/browser/ui/window_sizer/window_sizer.cc.orig
+++ chrome/browser/ui/window_sizer/window_sizer.cc
@@ -166,7 +166,7 @@ void WindowSizer::GetBrowserWindowBoundsAndShowState(
       browser, window_bounds, show_state);
 }
 
-#if !defined(OS_LINUX)
+#if !defined(OS_LINUX) || defined(OS_BSD)
 // Linux has its own implementation, see WindowSizerLinux.
 // static
 void WindowSizer::GetBrowserWindowBoundsAndShowState(
