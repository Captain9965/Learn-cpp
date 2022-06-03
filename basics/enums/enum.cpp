/*
An enumeration is a user-defined data type that consists of integral constants
Use case:
An enum variable takes only one value out of many possible values
*/
#include <iostream>
using namespace std;

enum designFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

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