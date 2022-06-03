#include <cstdio>
#include <iostream>
using namespace std;
typedef enum {
    VMC_BOOTING = (1<<0),
    VMC_IDLING = (1<<1),
    VMC_IDLING_NO_ACTIVITY = (1<<2),
    VMC_IDLING_INPUT_ERROR = (1<<3),

    VMC_DISPENSE_INIT = (1<<4),
    VMC_DISPENSING = (1<<5),
    VMC_REFILLING = (1<<6),
    VMC_SETTINGS = (1<<7),
    VMC_SHOW_SUPPORT = (1<<8),

    VMC_AUTHENTICATION_ADMIN = (1<<9),
    VMC_AUTHENTICATION_ADMIN_INPUT = (1<<10),
    VMC_AUTHENTICATION_ADMIN_ERROR,

    VMC_ADMIN = (1<<11),
    VMC_LOAD_ADMIN_UI = (1<<12),

    VMC_SAFE_STOP = (1<<13),
    VMC_SETUP_ERROR = (1<<14),
    VMC_NET_ERROR = (1<<15),
    VMC_NET_CONNECTED = (1<<16),
    VMC_SENSORS_ERROR = (1<<17),
    VMC_UNRECOVERABLE_ERROR = (1<<18),
    VMC_RECOVERABLE_ERROR = (1<<19),

    VMC_DISPENSE_TEST = (1<<20),
    VMC_REFILLING_TANK = (1<<21),
} vmc_state_t;


int main(){
    uint32_t flag = 7;
    uint32_t state;
    int i=0;
    for (int i=0; i<22; (1<<i++)){
         state = ( 1<< i);
        if (flag & state){
            flag = 0;
           
            break;
        } else{
            state = 0;
        }
    }
     printf("state set to : %d", state);
    return 0;
}