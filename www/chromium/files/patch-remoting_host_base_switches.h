Index: remoting/host/base/switches.h
--- remoting/host/base/switches.h.orig
+++ remoting/host/base/switches.h
@@ -35,7 +35,7 @@ extern const char kProcessTypeRdpDesktopSession[];
 extern const char kProcessTypeEvaluateCapability[];
 extern const char kProcessTypeFileChooser[];
 extern const char kProcessTypeUrlForwarderConfigurator[];
-#if defined(OS_LINUX) || defined(OS_CHROMEOS)
+#if defined(OS_LINUX) || defined(OS_CHROMEOS) || defined(OS_BSD)
 extern const char kProcessTypeXSessionChooser[];
 #endif  // defined(OS_LINUX) || defined(OS_CHROMEOS)
 
