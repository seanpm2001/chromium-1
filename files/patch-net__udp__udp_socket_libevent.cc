--- net/udp/udp_socket_libevent.cc.orig	Tue Mar 10 23:41:42 2015
+++ net/udp/udp_socket_libevent.cc	Wed Mar 11 07:22:50 2015
@@ -37,7 +37,7 @@
 const int kPortStart = 1024;
 const int kPortEnd = 65535;
 
-#if defined(OS_MACOSX)
+#if defined(OS_MACOSX) || defined(OS_BSD)
 
 // Returns IPv4 address in network order.
 int GetIPv4AddressFromIndex(int socket, uint32 index, uint32* address){
@@ -553,7 +553,7 @@
   if (multicast_interface_ != 0) {
     switch (addr_family_) {
       case AF_INET: {
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(OS_BSD)
         ip_mreqn mreq;
         mreq.imr_ifindex = multicast_interface_;
         mreq.imr_address.s_addr = htonl(INADDR_ANY);
@@ -628,7 +628,7 @@
       if (addr_family_ != AF_INET)
         return ERR_ADDRESS_INVALID;
 
-#if !defined(OS_MACOSX)
+#if !defined(OS_MACOSX) && !defined(OS_BSD)
       ip_mreqn mreq;
       mreq.imr_ifindex = multicast_interface_;
       mreq.imr_address.s_addr = htonl(INADDR_ANY);

