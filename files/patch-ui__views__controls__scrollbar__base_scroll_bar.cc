--- ui/views/controls/scrollbar/base_scroll_bar.cc.orig	Wed Mar 18 19:58:38 2015
+++ ui/views/controls/scrollbar/base_scroll_bar.cc	Wed Mar 18 19:58:47 2015
@@ -24,7 +24,7 @@
 #include "ui/views/controls/scrollbar/base_scroll_bar_thumb.h"
 #include "ui/views/widget/widget.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "ui/gfx/screen.h"
 #endif
