#include <cstdio>
#include <iostream>
typedef unsigned  long int number;
typedef float decimal;
using namespace std;
int main(){
    decimal b;
    number a;
    cout<< "Enter two numbers, an integer and a float: "<<endl;
    cin>>a>>b;
    cout<<"You entered the integer"<< a<< endl;
    cout<<"You entered the decimal"<< b<< endl;
    return 0;
}