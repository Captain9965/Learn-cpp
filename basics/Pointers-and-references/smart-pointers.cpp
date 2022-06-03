/*
*To avoid memory leaks, cpp provides SmartPointers to handle garbage collection to 
* avoid memory leaks..
* A smart pointer is a wrapper class over a pointer with overloaded operators such as * and -> and behave 
* exactly like pointers 
* the following illustrates the use of smart pointers using templates:
*/
#include "cstdio"
#include "iostream"
using namespace std;

template <class T>
class SmartPtr{
    //this is the actual pointer:
        T* ptr;
    public:
        explicit SmartPtr(T* ptr = nullptr){
            this->ptr = ptr;
        }
        ~SmartPtr(){
            delete ptr;
        }
        //overload dereferencing operator:
        T& operator*(){
            return *ptr;
        }
        //overload the arrow operator:
        T* operator->(){
            return ptr;
        }


};

//driver code:
int main(){
    //instantiate a smart pointer:
    SmartPtr<int> ptr(new int());
    *ptr = 20;
    cout << *ptr <<endl;
    return 0;

}