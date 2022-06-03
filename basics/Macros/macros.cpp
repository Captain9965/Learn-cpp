#include <iostream>
using namespace std;

#define BOLD 1
#define ITALICS 2
#define UNDERLINE 4


int main() 
{
    int myDesign = BOLD | UNDERLINE | ITALICS; 

        //    00000001
        //  | 00000100
        //  ___________
        //    00000101

    cout << myDesign<<endl;
    if (myDesign & ITALICS) {
        cout<<"I have set italics"<<endl;
    }

    return 0;
}