--- ui/app_list/app_list_menu.cc.orig	Sat Jul 19 05:41:40 2014
+++ ui/app_list/app_list_menu.cc	Sat Jul 19 05:45:57 2014
@@ -32,7 +32,7 @@
                                users_[i].email.empty() ? users_[i].name
                                                        : users_[i].email,
                                0 /* group_id */);
-#elif defined(OS_WIN) || (defined(OS_LINUX) && !defined(OS_CHROMEOS))
+#elif defined(OS_WIN) || ((defined(OS_BSD) || defined(OS_LINUX)) && !defined(OS_CHROMEOS))
       menu_model_.AddItem(SELECT_PROFILE + i, users_[i].name);
       int menu_index = menu_model_.GetIndexOfCommandId(SELECT_PROFILE + i);
       menu_model_.SetSublabel(menu_index, users_[i].email);
