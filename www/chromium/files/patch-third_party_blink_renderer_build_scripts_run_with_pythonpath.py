Index: third_party/blink/renderer/build/scripts/run_with_pythonpath.py
--- third_party/blink/renderer/build/scripts/run_with_pythonpath.py.orig
+++ third_party/blink/renderer/build/scripts/run_with_pythonpath.py
@@ -22,6 +22,7 @@ def main():
         existing_pp = (
             os.pathsep + env['PYTHONPATH']) if 'PYTHONPATH' in env else ''
         env['PYTHONPATH'] = os.pathsep.join(python_paths) + existing_pp
+    env['LD_LIBRARY_PATH'] = "${WRKSRC}/out/Release"
     sys.exit(subprocess.call([sys.executable] + args, env=env))
 
 
