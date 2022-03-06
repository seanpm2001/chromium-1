--- remoting/host/remote_open_url/remote_open_url_client.cc.orig	2022-02-28 16:54:41 UTC
+++ remoting/host/remote_open_url/remote_open_url_client.cc
@@ -15,7 +15,7 @@
 #include "remoting/host/mojom/chromoting_host_services.mojom.h"
 #include "remoting/host/mojom/remote_url_opener.mojom.h"
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "remoting/host/remote_open_url/remote_open_url_client_delegate_linux.h"
 #elif BUILDFLAG(IS_WIN)
 #include "remoting/host/remote_open_url/remote_open_url_client_delegate_win.h"
@@ -28,7 +28,7 @@ namespace {
 constexpr base::TimeDelta kRequestTimeout = base::Seconds(5);
 
 std::unique_ptr<RemoteOpenUrlClient::Delegate> CreateDelegate() {
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   return std::make_unique<RemoteOpenUrlClientDelegateLinux>();
 #elif BUILDFLAG(IS_WIN)
   return std::make_unique<RemoteOpenUrlClientDelegateWin>();
