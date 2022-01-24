--- remoting/host/remote_open_url/url_forwarder_configurator.cc.orig	2021-12-16 15:18:07 UTC
+++ remoting/host/remote_open_url/url_forwarder_configurator.cc
@@ -13,7 +13,7 @@ UrlForwarderConfigurator::UrlForwarderConfigurator() =
 
 UrlForwarderConfigurator::~UrlForwarderConfigurator() = default;
 
-#if !defined(OS_LINUX) && !defined(OS_WIN)
+#if !defined(OS_LINUX) && !defined(OS_WIN) && !defined(OS_BSD)
 
 // static
 std::unique_ptr<UrlForwarderConfigurator> UrlForwarderConfigurator::Create() {
@@ -23,6 +23,6 @@ std::unique_ptr<UrlForwarderConfigurator> UrlForwarder
   return nullptr;
 }
 
-#endif  // !defined(OS_LINUX) && !defined(OS_WIN)
+#endif  // !defined(OS_LINUX) && !defined(OS_WIN) && !defined(OS_BSD)
 
 }  // namespace remoting