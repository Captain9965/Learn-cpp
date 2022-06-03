#include <iostream>
using namespace std;

// Global variable
int num;

// Function declaration
int& test();

int main()
{
    test() = 5;

    cout << num<<endl;

    return 0;
}
//N/B: This function cannot return a constant neither can it return a local variable
int& test()
{
    return num;
}