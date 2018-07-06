#include "test_h.h"

void port(){
 int Sock;                
 int clen;
 struct sockaddr_in ServAddr;    // 구조체
 int port=65535;                    // 포트 변수( port[0] 부터 ~ port[1] 까지 검색 )

 int i =0;   
 while( ++i <= port )
 {
     if( (Sock = socket( PF_INET, SOCK_STREAM, IPPROTO_TCP) ) < 0 )  // 소켓 생성
     {
         exit(0);
     }

     clen = sizeof( ServAddr );                                      // 구조체 설정
     memset( &ServAddr, 0, sizeof( ServAddr ) );
     ServAddr.sin_family = AF_INET;
     ServAddr.sin_port = htons( i );

     int ret = connect( Sock, (struct sockaddr*)&ServAddr, clen );   // connect

     if( ret >= 0 )
     {
         printf( "PORT : %d \n", i );
     }

      close ( Sock );
 }
}
