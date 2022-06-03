#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    uint8_t manCode[3] = {'B', 'X', 'T'};
    uint16_t modelNo[12] = {'0', '0', '0', '0', '0', '0',
                          '0', '0', '0', '0', '0', '1'};
    uint16_t serialNo[12] = {'0', '0', '0', '0', '0', '0',
                           '0', '0', '0', '0', '0', '1'};
    uint16_t softVer[2] = {0x00, 0x01};
    uint16_t perBuff[30]={0x09};
    int i=0;
     for (int p = 0; p < 3; p++) {
        perBuff[++i]=manCode[p];
    }
    for (int p = 0; p < 12; p++) {
        perBuff[++i]=serialNo[p];
    }
    for (int p = 0; p < 12; p++) {
        perBuff[++i]=modelNo[p];
    }
    for (int p = 0; p < 2; p++) {
        perBuff[++i]=softVer[p];
    }

     for (const int &n : perBuff) { 
        cout << n << " ";
    }
    cout<<endl;

   
}