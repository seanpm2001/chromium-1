--- base/native_library_posix.cc.orig	2022-02-28 16:54:41 UTC
+++ base/native_library_posix.cc
@@ -32,7 +32,7 @@ NativeLibrary LoadNativeLibraryWithOptions(const FileP
   // http://crbug.com/17943, http://crbug.com/17557, http://crbug.com/36892,
   // and http://crbug.com/40794.
   int flags = RTLD_LAZY;
-#if BUILDFLAG(IS_ANDROID) || !defined(RTLD_DEEPBIND)
+#if BUILDFLAG(IS_ANDROID) || !defined(RTLD_DEEPBIND) || BUILDFLAG(IS_BSD)
   // Certain platforms don't define RTLD_DEEPBIND. Android dlopen() requires
   // further investigation, as it might vary across versions. Crash here to
   // warn developers that they're trying to rely on uncertain behavior.
