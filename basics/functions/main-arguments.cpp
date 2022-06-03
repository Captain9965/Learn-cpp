#include "cstdio"
#include "cstring"
#include "iostream"

using namespace std;

int main(int argc, char * const argv[]){

    cout << "main has been called" << endl;
    cout << "number of arguments passed ->" << argc <<endl;
    cout <<"Arguments passed-->" << endl;
    for (int i = 0 ; i < argc ; i++){
        cout << *argv++ << endl;
    }
        
    return 0;
}