/*
One can generate a signal as well using the raise() function with the signal number as an argument

*/
#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler( int signum ) {
   cout << "Interrupt signal (" << signum << ") received.\n";

   // cleanup and close up stuff here  
   // terminate program  

   exit(signum);  
}

int main () {
   int i = 0;
   // register signal SIGINT and signal handler  
   signal(SIGINT, signalHandler);  

   while(++i) {
      cout << "Going to sleep...." << endl;
      if( i == 3 ) {
         raise( SIGINT);
      }
      sleep(1);

   }

   return 0;
}