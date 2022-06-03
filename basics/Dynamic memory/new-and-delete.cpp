#include <iostream>
#include <cstdio>
#include <cstring>
#include <string.h>
using namespace std;

/*
memory in the heap may not have been allocated successfully, so it is good practise 
to always check that new doesn't return a null:
double* pvalue  = NULL;
if( !(pvalue  = new double )) {
   cout << "Error: out of memory." <<endl;
   exit(1);
}
It is recommended not to use malloc as opposed to new because new, 
in addition to allocation of memory, also constructs objects

For multidimensional arrays:
double** pvalue  = NULL;      // Pointer initialized with null 
pvalue  = new double [3][4];  // Allocate memory for a 3x4 array
Example:
*/
int main(){
    char* name = nullptr;
    name = new char[(strlen("lenny")+1)];
    size_t len = strlen("lenny");
    strncpy(name,"Lenny", len);
    printf("This is the string-->%s, whose length is %zu", name, len);
    delete[] name;

}