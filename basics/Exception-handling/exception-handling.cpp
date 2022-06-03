#include <iostream>
using namespace std;
/*
And exception is a problem that arises in the execution of a program.
and they provide a way to transfer control from one part of the program to another
It is built upon 3 keywords:
1. try:
    this identifies a block of code for which particular exceptions will be activated
2. Catch:
    Indicates the catching of an exception with an exception handler at the place where you want to handle the problem
3. throw:
    A program throws and exception when a problem shows up.
*/
double division(int a, int b) {
   if( b == 0 ) {
      throw "Division by zero condition!";
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
   } catch (const char* msg) {
     cerr << msg << endl;
   }
    cout << "Program safely terminated!!" << endl;
   return 0;
}