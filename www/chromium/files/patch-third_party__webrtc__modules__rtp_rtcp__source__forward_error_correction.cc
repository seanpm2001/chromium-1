--- ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc.orig	2014-07-15 21:04:57.000000000 +0200
+++ ./third_party/webrtc/modules/rtp_rtcp/source/forward_error_correction.cc	2014-07-20 18:13:09.000000000 +0200
@@ -15,6 +15,7 @@
 #include <string.h>
 
 #include <algorithm>
+#include <cstdlib>
 #include <iterator>
 
 #include "webrtc/modules/rtp_rtcp/interface/rtp_rtcp_defines.h"
