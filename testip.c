#include "testh.h"

void ip(){
 int  fd;
 struct ifreq ifr;

 fd = socket(AF_INET, SOCK_DGRAM, 0);

 /* I want to get an IPv4 IP address */ 
 ifr.ifr_addr.sa_family = AF_INET;

 /* I want IP address attached to \"ens33\" */
 strncpy(ifr.ifr_name, "ens33", IFNAMSIZ);

 if(ioctl(fd, SIOCGIFADDR, &ifr)<0) exit;

 close(fd);
 /* display result */
 printf("SERVER IP : %s\n", inet_ntoa(((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr));

}
