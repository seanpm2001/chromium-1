--- chrome/browser/web_applications/web_app_provider.cc.orig	2021-07-19 18:45:10 UTC
+++ chrome/browser/web_applications/web_app_provider.cc
@@ -229,7 +229,7 @@ void WebAppProvider::CreateWebAppsSubsystems(Profile* 
 
     std::unique_ptr<UrlHandlerManager> url_handler_manager;
 #if defined(OS_WIN) || defined(OS_MAC) || \
-    (defined(OS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS))
+    (defined(OS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS)) || defined(OS_BSD)
     url_handler_manager = std::make_unique<UrlHandlerManagerImpl>(profile);
 #endif
 
