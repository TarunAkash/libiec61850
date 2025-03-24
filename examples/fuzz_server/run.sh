afl-fuzz -d -i afl-in/ -o afl-out/ -N tcp://127.0.0.1/102 -P IEC61850 -D 10000 -q 3 -s 3 -K -R ./fuzz_server_control
