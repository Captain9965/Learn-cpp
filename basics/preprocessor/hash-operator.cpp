#include <iostream>
/*
the # operator causes a replacement-text token to be converted to a string surrounded by quotes.

*/
using namespace std;
#define ERROR(X) #X
#define CONCAT(a,b) a##b

int main(){
    cout << ERROR(Lenny Weda Orengo) << endl;
    int ab = 50;
    cout << CONCAT(a, b) << endl;
    return 0;
}