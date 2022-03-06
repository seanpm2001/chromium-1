--- third_party/crashpad/crashpad/util/posix/symbolic_constants_posix.cc.orig	2022-02-28 16:54:41 UTC
+++ third_party/crashpad/crashpad/util/posix/symbolic_constants_posix.cc
@@ -66,7 +66,7 @@ constexpr const char* kSignalNames[] = {
     "INFO",
     "USR1",
     "USR2",
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
 #if defined(ARCH_CPU_MIPS_FAMILY)
     "HUP",
     "INT",
@@ -137,7 +137,7 @@ constexpr const char* kSignalNames[] = {
 #endif  // defined(ARCH_CPU_MIPS_FAMILY)
 #endif
 };
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_BSD)
 // NSIG is 64 to account for real-time signals.
 static_assert(base::size(kSignalNames) == 32, "kSignalNames length");
 #else
