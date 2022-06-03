#include <iostream>
 
using namespace std;
const int MAX = 4;
 
int main () {
const char *names[MAX] = { "Lenny Orengo", "Cephas Orengo", "Keller Dorah", "Rawlan Omoto" };

   for (int i = 0; i < MAX; i++) {
      cout << "Value of names[" << i << "] = ";
      cout << *(names + i) << endl;
   }
   
   return 0;
}