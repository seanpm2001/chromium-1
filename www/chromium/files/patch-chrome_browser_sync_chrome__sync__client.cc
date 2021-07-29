--- chrome/browser/sync/chrome_sync_client.cc.orig	2021-07-19 18:45:09 UTC
+++ chrome/browser/sync/chrome_sync_client.cc
@@ -471,7 +471,7 @@ ChromeSyncClient::CreateDataTypeControllers(syncer::Sy
 
 // Chrome prefers OS provided spell checkers where they exist. So only sync the
 // custom dictionary on platforms that typically don't provide one.
-#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_WIN)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_WIN) || defined(OS_BSD)
   // Dictionary sync is enabled by default.
   if (!disabled_types.Has(syncer::DICTIONARY) &&
       GetPrefService()->GetBoolean(spellcheck::prefs::kSpellCheckEnable)) {
@@ -480,7 +480,7 @@ ChromeSyncClient::CreateDataTypeControllers(syncer::Sy
             syncer::DICTIONARY, model_type_store_factory,
             GetSyncableServiceForType(syncer::DICTIONARY), dump_stack));
   }
-#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_WIN)
+#endif  // defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_WIN) || defined(OS_BSD)
 
 #if BUILDFLAG(IS_CHROMEOS_ASH)
   if (arc::IsArcAllowedForProfile(profile_) &&
