/*
Signals are interrrupts delivered to a process by the OS which can 
terminate a program prematurely.
Examples of signals:
SIGABRT- Abnormal termination of the program, such as a call to abort.
SIGFPE- An erroneous arithmetic operation, such as a divide by zero or an operation resulting in overflow.
SIGILL- Detection of an illegal instruction.
SIGINT- Receipt of an interactive attention signal.
SIGSEGV- An invalid access to storage.

the C++ signal handling library provides function signal to trap unexpected events.ie
void (*signal (int sig, void (*func)(int)))(int)
It receives a signal number as the first argument and a pointer to the signal hadling function as the second argument.
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
   // register signal SIGINT and signal handler  
   signal(SIGINT, signalHandler);  

   while(1) {
      cout << "Going to sleep...." << endl;
      sleep(1);
   }

   return 0;
}