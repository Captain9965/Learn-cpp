/*
There are two types of multitasking: 
1. Process based multitasking- 
 Handles the concurrent execution of programs
2. Thread based multi-tasking-
 Handles concurrent execution of pieces of the same program.
 c++ does not contain any built-in support for multithreading and hence relies on the 
 operating system to provide this feature.
 On Linux, Posix threads, or Pthreads provides API which are available on many unix-like posix systems like FreeBSD, NetBSD, GNU/Linux, Mac OS X and Solaris
 the following routine is used to create a posix thread:
 #include <pthread.h>
 pthread_create (thread, attr, start_routine, arg)

 Once created, threads are peers and they can create other threads, there is no implied hierachy or dependency between threads

 Terminating threads:
 #include <pthread.h>
 pthread_exit (status) 
*/
#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>

using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid) {
   long tid;
   tid = (long)threadid;
   cout << "Hello World! Thread ID, " << tid << endl;
   pthread_exit(NULL);
}

int main () {
   pthread_t threads[NUM_THREADS];
   int rc;
   long i;
   
   for( i = 0; i < NUM_THREADS; i++ ) {
      cout << "main() : creating thread, " << i << endl;
      rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);
      
      if (rc) {
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}