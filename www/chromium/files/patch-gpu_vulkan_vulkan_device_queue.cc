Index: gpu/vulkan/vulkan_device_queue.cc
--- gpu/vulkan/vulkan_device_queue.cc.orig
+++ gpu/vulkan/vulkan_device_queue.cc
@@ -85,7 +85,7 @@ bool VulkanDeviceQueue::Initialize(
 
       // In dual-CPU cases, we cannot detect the active GPU correctly on Linux,
       // so don't select GPU device based on the |gpu_info|.
-#if !defined(OS_LINUX)
+#if !defined(OS_LINUX) && !defined(OS_BSD)
     // If gpu_info is provided, the device should match it.
     if (gpu_info && (device_properties.vendorID != gpu_info->gpu.vendor_id ||
                      device_properties.deviceID != gpu_info->gpu.device_id)) {
@@ -230,7 +230,7 @@ bool VulkanDeviceQueue::Initialize(
   enabled_device_features_2_ = {VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2};
 
   // Android, Fuchsia, and Linux(VaapiVideoDecoder) need YCbCr sampler support.
-#if defined(OS_ANDROID) || defined(OS_FUCHSIA) || defined(OS_LINUX)
+#if defined(OS_ANDROID) || defined(OS_FUCHSIA) || defined(OS_LINUX) || defined(OS_BSD)
   if (!physical_device_info.feature_sampler_ycbcr_conversion) {
     LOG(ERROR) << "samplerYcbcrConversion is not supported.";
     return false;
