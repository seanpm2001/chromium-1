Index: extensions/browser/browser_context_keyed_service_factories.cc
--- extensions/browser/browser_context_keyed_service_factories.cc.orig
+++ extensions/browser/browser_context_keyed_service_factories.cc
@@ -89,7 +89,7 @@ void EnsureBrowserContextKeyedServiceFactoriesBuilt() 
   IdleManagerFactory::GetInstance();
   ManagementAPI::GetFactoryInstance();
 #if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_WIN) || \
-    defined(OS_MAC)
+    defined(OS_MAC) || defined(OS_BSD)
   NetworkingPrivateEventRouterFactory::GetInstance();
 #endif
   PowerAPI::GetFactoryInstance();
