Index: headless/lib/browser/headless_content_browser_client.cc
--- headless/lib/browser/headless_content_browser_client.cc.orig
+++ headless/lib/browser/headless_content_browser_client.cc
@@ -230,7 +230,7 @@ HeadlessContentBrowserClient::GetGeneratedCodeCacheSet
   return content::GeneratedCodeCacheSettings(true, 0, context->GetPath());
 }
 
-#if defined(OS_POSIX) && !defined(OS_MAC)
+#if defined(OS_POSIX) && !defined(OS_MAC) && !defined(OS_BSD)
 void HeadlessContentBrowserClient::GetAdditionalMappedFilesForChildProcess(
     const base::CommandLine& command_line,
     int child_process_id,
