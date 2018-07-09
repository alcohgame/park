testexe : testmain.o testhostname.o testip.o testport.o testversion.o
	gcc -o testexe testmain.o testhostname.o testip.o testport.o testversion.o
testmain.o : testmain.c
	gcc -c -o testmain.o testmain.c
testhostname.o : testhostname.c
	gcc -c -o testhostname.o testhostname.c
testversion.o : testversion.c
	gcc -c -o testversion.o testversion.c
testip.o : testip.c
	gcc -c -o testip.o testip.c
testport.o : testport.c
	gcc -c -o testport.o testport.c
clean :
	rm *.o testexe
