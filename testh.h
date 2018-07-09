#include <stdio.h>
#include <sys/utsname.h>//호스트네임 알아낼 때 사용 unisrd.h,버전 포함 sys/param.h
#include <sys/param.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>//문자 비교,memset
#include <sys/types.h>//socket.h과 함께 함수socket()으로 사용
#include <sys/socket.h>
#include <sys/ioctl.h>// i/o
#include <netinet/in.h>//ip 관련 net/if.h
#include <net/if.h>
#include <arpa/inet.h>

void ip();
void hostname();
void port();
void version();
