--- gpu/tools/tools.gyp.orig	Wed Nov 19 15:30:44 2014
+++ gpu/tools/tools.gyp	Wed Nov 19 15:30:54 2014
@@ -9,7 +9,7 @@
   'targets': [
   ],
   'conditions': [
-    ['OS == "linux" and target_arch != "arm" and use_x11==1', {
+    ['(OS == "linux" or os_bsd==1) and target_arch != "arm" and use_x11==1', {
       'targets': [
         {
           'target_name': 'compositor_model_bench',
@@ -21,7 +21,6 @@
           ],
           'libraries': [
             '-lGL',
-            '-ldl',
           ],
           'sources': [
             'compositor_model_bench/compositor_model_bench.cc',

