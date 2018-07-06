test_exe : test_main.o test_hostname.o test_ip.o test_port.o test_version.o
	gcc -o test_exe test_main.o test_hostname.o test_ip.o test_port.o test_version.o
test_main.o : test_main.c
	gcc -c -o test_main.o test_main.c
test_hostname.o : test_hostname.c
	gcc -c -o test_hostname.o test_hostname.c
test_version.o : test_version.c
	gcc -c -o test_version.o test_version.c
test_ip.o : test_ip.c
	gcc -c -o test_ip.o test_ip.c
test_port.o : test_port.c
	gcc -c -o test_port.o test_port.c
clean :
	rm *.o test_exe
