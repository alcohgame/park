#include "testh.h"
void version(){
	struct utsname buf;
	uname(&buf);

	printf("VERSION INFO : %s \n",buf.version);
}
