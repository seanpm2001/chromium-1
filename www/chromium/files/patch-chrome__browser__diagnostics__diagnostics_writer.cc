--- ./chrome/browser/diagnostics/diagnostics_writer.cc.orig	2014-07-15 21:01:23.000000000 +0200
+++ ./chrome/browser/diagnostics/diagnostics_writer.cc	2014-07-20 18:13:07.000000000 +0200
@@ -268,7 +268,7 @@
       console_->SetColor(color);
       console_->Write(base::ASCIIToUTF16(result));
     }
-    if (format_ == MACHINE) {
+    if (format_ == THEMACHINE) {
       return WriteInfoLine(base::StringPrintf(
           "%03d %s (%s)", outcome_code, id.c_str(), extra.c_str()));
     } else {
