--- chrome/browser/extensions/browser_context_keyed_service_factories.cc.orig	2019-01-30 02:17:45.000000000 +0100
+++ chrome/browser/extensions/browser_context_keyed_service_factories.cc	2019-01-31 22:23:23.442216000 +0100
@@ -55,7 +55,7 @@
 #include "chrome/browser/chromeos/extensions/input_method_api.h"
 #include "chrome/browser/chromeos/extensions/media_player_api.h"
 #include "chrome/browser/extensions/api/input_ime/input_ime_api.h"
-#elif defined(OS_LINUX) || defined(OS_WIN)
+#elif defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
 #include "chrome/browser/extensions/api/input_ime/input_ime_api.h"
 #endif
 
@@ -97,7 +97,7 @@
 #if defined(OS_CHROMEOS)
   extensions::InputImeAPI::GetFactoryInstance();
   extensions::InputMethodAPI::GetFactoryInstance();
-#elif defined(OS_LINUX) || defined(OS_WIN)
+#elif defined(OS_LINUX) || defined(OS_WIN) || defined(OS_BSD)
   extensions::InputImeAPI::GetFactoryInstance();
 #endif
   extensions::LanguageSettingsPrivateDelegateFactory::GetInstance();
