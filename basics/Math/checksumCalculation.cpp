#include <cstdio>
#include <iostream>
#define BUFFER 36
using namespace std;
ssize_t bytesSent;
uint16_t responseBuff[BUFFER]={0};
/* function prototype*/
ssize_t send_response(uint16_t* response, ssize_t responseSize);
int main(){
  uint16_t pollBuff[]={0x02,0x00,0x01,0x05,0x02,0x00,0x07,0x01,0x02,0x05,0x14,0xFF};
  printf("size of array: %ld\r\n",(sizeof(pollBuff)/sizeof(pollBuff[0])));
  send_response(pollBuff, (sizeof(pollBuff)/sizeof(pollBuff[0])));
    }
ssize_t send_response(uint16_t* response,ssize_t responseSize){
     uint16_t chk=0;
     bytesSent=0;
     //printf("size of array passed: %ld\r\n",(sizeof(response)/sizeof(response[0])));
     for(int i=0;i<responseSize;i++){
         chk+=response[i];
         responseBuff[0]=response[i];
         //bytesSent+=MDB.write((void*)responseBuff,1);
         printf("responseBuff[0]: %x\r\n",responseBuff[0]);
     }
     chk &=0xFF;
     chk|=0x100;
     responseBuff[0]=chk;
     //bytesSent+=MDB.write((void*)responseBuff,1);
     printf("Checksum: %x\r\n",responseBuff[0]);
     return bytesSent;


 }
