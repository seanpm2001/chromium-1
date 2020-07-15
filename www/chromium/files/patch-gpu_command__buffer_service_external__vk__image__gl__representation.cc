--- gpu/command_buffer/service/external_vk_image_gl_representation.cc.orig	2020-07-07 21:58:16 UTC
+++ gpu/command_buffer/service/external_vk_image_gl_representation.cc
@@ -178,7 +178,7 @@ GLuint ExternalVkImageGLRepresentationShared::ImportVk
     SemaphoreHandle handle) {
   if (!handle.is_valid())
     return 0;
-#if defined(OS_LINUX) || defined(OS_ANDROID)
+#if defined(OS_LINUX) || defined(OS_ANDROID) || defined(OS_BSD)
   if (handle.vk_handle_type() !=
       VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT) {
     DLOG(ERROR) << "Importing semaphore handle of unexpected type:"
