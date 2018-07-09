#include "test_h.h"

void hostname(){
	char hn[MAXHOSTNAMELEN]="";
	gethostname(hn,MAXHOSTNAMELEN);
	printf("HOST NAME : %s \n",hn);
}
