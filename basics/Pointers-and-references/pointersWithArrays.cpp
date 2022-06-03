#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    string *ptr;
    string names[3]={"lenny","Weda","Orengo"};
    ptr=names;// or ptr=&names[0];
    cout<<"First memory location: "<<ptr<<endl;
    /*Note obtaining the number of elements in the array
    also: 
    sizeof(names)/sizeof(names[0])
    */
    for (int i=0;i<(*(&names+1)-names);i++){ 
        cout <<" Name: "<<*(ptr++)<<endl;
    }
    


}