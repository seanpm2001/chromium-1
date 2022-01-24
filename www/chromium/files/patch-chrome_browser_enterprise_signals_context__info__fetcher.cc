--- chrome/browser/enterprise/signals/context_info_fetcher.cc.orig	2022-01-21 13:10:40 UTC
+++ chrome/browser/enterprise/signals/context_info_fetcher.cc
@@ -26,7 +26,7 @@
 #include "content/public/browser/site_isolation_policy.h"
 #include "device_management_backend.pb.h"
 
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
 #include "net/dns/public/resolv_reader.h"
 #endif
 
@@ -262,7 +262,7 @@ ScopedUfwConfigPathForTesting::~ScopedUfwConfigPathFor
 
 std::vector<std::string> ContextInfoFetcher::GetDnsServers() {
   std::vector<std::string> dns_addresses;
-#if defined(OS_LINUX)
+#if defined(OS_LINUX) || defined(OS_BSD)
   std::vector<net::IPEndPoint> nameservers;
   std::unique_ptr<net::ResolvReader> resolv_reader =
       std::make_unique<net::ResolvReader>();
