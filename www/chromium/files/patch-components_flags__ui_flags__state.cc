--- components/flags_ui/flags_state.cc.orig	2022-03-25 21:59:56 UTC
+++ components/flags_ui/flags_state.cc
@@ -622,7 +622,7 @@ unsigned short FlagsState::GetCurrentPlatform() {
 #elif BUILDFLAG(IS_CHROMEOS_ASH)
   return kOsCrOS;
 #elif (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)) || \
-    BUILDFLAG(IS_OPENBSD)
+    BUILDFLAG(IS_BSD)
   return kOsLinux;
 #elif BUILDFLAG(IS_ANDROID)
   return kOsAndroid;
