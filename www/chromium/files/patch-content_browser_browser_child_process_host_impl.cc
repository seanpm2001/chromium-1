Index: content/browser/browser_child_process_host_impl.cc
--- content/browser/browser_child_process_host_impl.cc.orig
+++ content/browser/browser_child_process_host_impl.cc
@@ -305,6 +305,7 @@ void BrowserChildProcessHostImpl::LaunchWithoutExtraCo
       switches::kDisableBestEffortTasks,
       switches::kDisableLogging,
       switches::kEnableLogging,
+      switches::kDisableUnveil,
       switches::kIPCConnectionTimeout,
       switches::kLogBestEffortTasks,
       switches::kLogFile,
