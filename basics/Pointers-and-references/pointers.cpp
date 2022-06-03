/*When * is used with pointers, it's called the dereference operator. 
It operates on a pointer and gives the value pointed by the address stored in the pointer
*/
#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int var1=20;
    int var2=30;
    int var3=40;
    //Assign the references to the above variables to their respective pointers
    int* ptr1;
    int* ptr2;
    int* ptr3;

    ptr1=&var1;
    ptr2=&var2;
    ptr3=&var3;
    cout<<"Address for var1: ["<<ptr1<<"]"<< "of size: "<< sizeof(ptr1)<<endl;
    cout<<"Address for var2: ["<<ptr2<<"]"<<endl;
    cout<<"Address for var3: ["<<ptr3<<"]"<<endl;
    //Access the value pointed to by the pointer
    cout<<"Value of  var1: ["<<*ptr1<<"]"<<endl;
    cout<<"Value of  var2: ["<<*ptr2<<"]"<<endl;
    cout<<"Value of  var3: ["<<*ptr3<<"]"<<endl;
}