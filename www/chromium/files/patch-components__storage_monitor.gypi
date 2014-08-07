--- ./components/storage_monitor.gypi.orig	2014-07-15 21:02:29.000000000 +0200
+++ ./components/storage_monitor.gypi	2014-07-20 18:13:08.000000000 +0200
@@ -20,10 +20,10 @@
         'storage_monitor/image_capture_device_manager.mm',
         'storage_monitor/media_storage_util.cc',
         'storage_monitor/media_storage_util.h',
-        'storage_monitor/media_transfer_protocol_device_observer_linux.cc',
-        'storage_monitor/media_transfer_protocol_device_observer_linux.h',
-        'storage_monitor/mtab_watcher_linux.cc',
-        'storage_monitor/mtab_watcher_linux.h',
+        #'storage_monitor/media_transfer_protocol_device_observer_linux.cc',
+        #'storage_monitor/media_transfer_protocol_device_observer_linux.h',
+        #'storage_monitor/mtab_watcher_linux.cc',
+        #'storage_monitor/mtab_watcher_linux.h',
         'storage_monitor/portable_device_watcher_win.cc',
         'storage_monitor/portable_device_watcher_win.h',
         'storage_monitor/removable_device_constants.cc',
@@ -35,16 +35,18 @@
         'storage_monitor/storage_monitor.h',
         'storage_monitor/storage_monitor_chromeos.cc',
         'storage_monitor/storage_monitor_chromeos.h',
-        'storage_monitor/storage_monitor_linux.cc',
-        'storage_monitor/storage_monitor_linux.h',
+        #'storage_monitor/storage_monitor_linux.cc',
+        #'storage_monitor/storage_monitor_linux.h',
+        'storage_monitor/storage_monitor_freebsd.cc',
+        'storage_monitor/storage_monitor_freebsd.h',
         'storage_monitor/storage_monitor_mac.h',
         'storage_monitor/storage_monitor_mac.mm',
         'storage_monitor/storage_monitor_win.cc',
         'storage_monitor/storage_monitor_win.h',
         'storage_monitor/transient_device_ids.cc',
         'storage_monitor/transient_device_ids.h',
-        'storage_monitor/udev_util_linux.cc',
-        'storage_monitor/udev_util_linux.h',
+        #'storage_monitor/udev_util_linux.cc',
+        #'storage_monitor/udev_util_linux.h',
         'storage_monitor/volume_mount_watcher_win.cc',
         'storage_monitor/volume_mount_watcher_win.h',
       ],
@@ -89,8 +91,8 @@
       'sources': [
         'storage_monitor/mock_removable_storage_observer.cc',
         'storage_monitor/mock_removable_storage_observer.h',
-        'storage_monitor/test_media_transfer_protocol_manager_linux.cc',
-        'storage_monitor/test_media_transfer_protocol_manager_linux.h',
+        #'storage_monitor/test_media_transfer_protocol_manager_linux.cc',
+        #'storage_monitor/test_media_transfer_protocol_manager_linux.h',
         'storage_monitor/test_portable_device_watcher_win.cc',
         'storage_monitor/test_portable_device_watcher_win.h',
         'storage_monitor/test_storage_monitor.cc',
