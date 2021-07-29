--- headless/lib/headless_content_main_delegate.cc.orig	2021-07-19 18:45:17 UTC
+++ headless/lib/headless_content_main_delegate.cc
@@ -327,7 +327,7 @@ void HeadlessContentMainDelegate::InitCrashReporter(
     const base::CommandLine& command_line) {
   if (command_line.HasSwitch(::switches::kDisableBreakpad))
     return;
-#if defined(OS_FUCHSIA)
+#if defined(OS_FUCHSIA) || defined(OS_BSD)
   // TODO(fuchsia): Implement this when crash reporting/Breakpad are available
   // in Fuchsia. (crbug.com/753619)
   NOTIMPLEMENTED();
