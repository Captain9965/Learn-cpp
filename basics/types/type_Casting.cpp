#include <cstdio>
#include <iostream>

using namespace std;
int main(){
    float a=20.445;
    int f;
    /*
    using C style notation
    */
    f=(int)a;
    cout<< f<<endl;
    /*
    using function notation
    */
     f=int(a);
    cout<< f<<endl;
    return 0;
}