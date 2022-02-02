Index: third_party/blink/public/platform/web_vector.h
--- third_party/blink/public/platform/web_vector.h.orig
+++ third_party/blink/public/platform/web_vector.h
@@ -81,7 +81,7 @@ class WebVector {
   // The vector can be populated using reserve() and emplace_back().
   WebVector() = default;
 
-#if defined(ARCH_CPU_64_BITS)
+#if defined(ARCH_CPU_64_BITS) || defined(__OpenBSD__) || defined(__FreeBSD__)
   // Create a vector with |size| default-constructed elements. We define
   // a constructor with size_t otherwise we'd have a duplicate define.
   explicit WebVector(size_t size) : data_(size) {}
