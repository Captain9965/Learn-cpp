/*

preprocessors are directives that give instructions to the compiler to process the information before the actual compilation
even begins
the #define directive creates symbolic constants called macros
*/
#include <iostream>

using namespace std;

#define NAME "lenny"

int main(){
    cout << "The name is " << NAME << endl;
    return 0;
}