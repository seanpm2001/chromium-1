--- third_party/perfetto/include/perfetto/base/build_config.h.orig	2018-08-04 21:12:09.930418000 +0200
+++ third_party/perfetto/include/perfetto/base/build_config.h	2018-08-04 21:14:11.343838000 +0200
@@ -28,6 +28,7 @@
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_ANDROID() 1
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_MACOSX() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX() 0
+#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_FREEBSD() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WIN() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WASM() 0
 #elif defined(__APPLE__)
@@ -36,22 +37,25 @@
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WIN() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WASM() 0
-#elif defined(__linux__)
+#elif defined(__linux__) || defined(__FreeBSD__)
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_ANDROID() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_MACOSX() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX() 1
+#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_FREEBSD() 1
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WIN() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WASM() 0
 #elif defined(_WIN32)
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_ANDROID() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_MACOSX() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX() 0
+#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_FREEBSD() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WIN() 1
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WASM() 0
 #elif defined(__EMSCRIPTEN__)
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_ANDROID() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_MACOSX() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_LINUX() 0
+#define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_FREEBSD() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WIN() 0
 #define PERFETTO_BUILDFLAG_DEFINE_PERFETTO_OS_WASM() 1
 #else
