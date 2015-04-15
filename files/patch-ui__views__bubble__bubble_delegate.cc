--- ui/views/bubble/bubble_delegate.cc.orig	Thu Oct  2 19:19:03 2014
+++ ui/views/bubble/bubble_delegate.cc	Fri Oct 10 16:10:31 2014
@@ -101,7 +101,7 @@
   // the parent frame and let DWM handle compositing.  If not, then we don't
   // want to allow the bubble to extend the frame because it will be clipped.
   bubble_delegate->set_adjust_if_offscreen(ui::win::IsAeroGlassEnabled());
-#elif defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#elif (defined(OS_LINUX) || defined(OS_BSD)) && !defined(OS_CHROMEOS)
   // Linux clips bubble windows that extend outside their parent window bounds.
   bubble_delegate->set_adjust_if_offscreen(false);
 #endif
