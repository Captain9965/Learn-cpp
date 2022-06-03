#include <iostream>

using namespace std;

#define max(a,b) ((a>b)? a : b)

 int main(){
     int i = 10;
     int j = 20;
     cout << "The greater number is: " << max(j,i) << endl;
     if (false){
         cout << "this statement is commented out" << endl;
     }
     return 0;
 }