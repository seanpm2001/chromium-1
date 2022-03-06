--- content/public/common/content_features.cc.orig	2022-02-28 16:54:41 UTC
+++ content/public/common/content_features.cc
@@ -50,7 +50,7 @@ const base::Feature kAudioServiceOutOfProcess {
   "AudioServiceOutOfProcess",
 // TODO(crbug.com/1052397): Remove !IS_CHROMEOS_LACROS once lacros starts being
 // built with OS_CHROMEOS instead of OS_LINUX.
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || \
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD) || \
     (BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS_LACROS))
       base::FEATURE_ENABLED_BY_DEFAULT
 #else
@@ -62,7 +62,7 @@ const base::Feature kAudioServiceOutOfProcess {
 // kAudioServiceOutOfProcess feature is enabled.
 const base::Feature kAudioServiceSandbox {
   "AudioServiceSandbox",
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_FUCHSIA)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_FUCHSIA) || BUILDFLAG(IS_BSD)
       base::FEATURE_ENABLED_BY_DEFAULT
 #else
       base::FEATURE_DISABLED_BY_DEFAULT
@@ -987,7 +987,7 @@ const base::Feature kWebAssemblyBaseline{"WebAssemblyB
 const base::Feature kWebAssemblyCodeProtection{
     "WebAssemblyCodeProtection", base::FEATURE_DISABLED_BY_DEFAULT};
 
-#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)) && defined(ARCH_CPU_X86_64)
+#if (BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)) && defined(ARCH_CPU_X86_64)
 // Use memory protection keys in userspace (PKU) (if available) to protect code
 // JITed for WebAssembly. Fall back to traditional memory protection if
 // WebAssemblyCodeProtection is also enabled.
@@ -1017,7 +1017,7 @@ const base::Feature kWebAssemblyTiering{"WebAssemblyTi
 const base::Feature kWebAssemblyTrapHandler {
   "WebAssemblyTrapHandler",
 #if ((BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_WIN) || \
-      BUILDFLAG(IS_MAC)) &&                                                 \
+      BUILDFLAG(IS_MAC) || BUILDFLAG(IS_BSD)) &&                            \
      defined(ARCH_CPU_X86_64)) ||                                           \
     (BUILDFLAG(IS_MAC) && defined(ARCH_CPU_ARM64))
       base::FEATURE_ENABLED_BY_DEFAULT
@@ -1039,7 +1039,7 @@ const base::Feature kWebAuthCable {
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
 // If updating this, also update kWebAuthCableServerLink.
-#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       base::FEATURE_DISABLED_BY_DEFAULT
 #else
       base::FEATURE_ENABLED_BY_DEFAULT
@@ -1107,7 +1107,11 @@ const base::Feature kWebUIReportOnlyTrustedTypes{
 
 // Controls whether the WebUSB API is enabled:
 // https://wicg.github.io/webusb
+#if BUILDFLAG(IS_BSD)
+const base::Feature kWebUsb{"WebUSB", base::FEATURE_DISABLED_BY_DEFAULT};
+#else
 const base::Feature kWebUsb{"WebUSB", base::FEATURE_ENABLED_BY_DEFAULT};
+#endif
 
 // Controls whether the WebXR Device API is enabled.
 const base::Feature kWebXr{"WebXR", base::FEATURE_ENABLED_BY_DEFAULT};
