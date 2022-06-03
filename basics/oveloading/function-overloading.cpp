/*
The process of selecting the most appropriate overload function is called overload resolution
*/
#include <iostream>
#include <cstdio>
using namespace std;

class printData{
    public:
    void print(int number){
        cout << "This is the number: " << number <<endl;
    }
    void print(const char* string)
    {
        cout << "This is the c_string" << string <<endl;
    }
    void print(double d_number){
        cout << "This is the double: " << d_number <<  endl;
    }

};
int main(){
    printData* sample = nullptr;
    sample = new printData();
    sample->print(20);
    delete sample;
    return 0;
}