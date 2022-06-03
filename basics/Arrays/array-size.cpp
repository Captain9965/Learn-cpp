// A C++ program to show that we use template and
// reference to find size of any type array parameter
//sizeof cannot be called in a pointer because it is passed as a pointer
#include <iostream>
using namespace std;
 
template <typename T, size_t n>
void findSize(T (&arr)[n])
{
    cout << sizeof(T) * n << endl;
}
 
int main()
{
    int a[10];
    cout << sizeof(a) << " ";
    findSize(a);
 
    float f[20];
    cout << sizeof(f) << " ";
    findSize(f);
    return 0;
}