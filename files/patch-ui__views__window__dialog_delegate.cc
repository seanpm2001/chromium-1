--- ui/views/window/dialog_delegate.cc.orig	Wed Dec  3 03:13:29 2014
+++ ui/views/window/dialog_delegate.cc	Sat Dec  6 11:34:27 2014
@@ -48,7 +48,7 @@
   params.bounds = bounds;
   DialogDelegate* dialog = delegate->AsDialogDelegate();
 
-#if defined(OS_LINUX) && !defined(OS_CHROMEOS)
+#if (defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS)
   // The new style doesn't support unparented dialogs on Linux desktop.
   if (dialog)
     dialog->supports_new_style_ &= parent != NULL;
