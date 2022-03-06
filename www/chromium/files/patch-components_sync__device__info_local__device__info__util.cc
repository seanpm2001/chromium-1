--- components/sync_device_info/local_device_info_util.cc.orig	2022-02-28 16:54:41 UTC
+++ components/sync_device_info/local_device_info_util.cc
@@ -75,7 +75,7 @@ std::string GetPersonalizableDeviceNameInternal();
 sync_pb::SyncEnums::DeviceType GetLocalDeviceType() {
 #if BUILDFLAG(IS_CHROMEOS_ASH)
   return sync_pb::SyncEnums_DeviceType_TYPE_CROS;
-#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   return sync_pb::SyncEnums_DeviceType_TYPE_LINUX;
 #elif BUILDFLAG(IS_ANDROID) || BUILDFLAG(IS_IOS)
   return ui::GetDeviceFormFactor() == ui::DEVICE_FORM_FACTOR_TABLET
