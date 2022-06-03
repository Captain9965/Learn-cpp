#include <iostream>
#include <cstdio>
using namespace std;
int main(){

    std::string names[] = {"Lenny", "Weda", "Orengo"};
    std::string *name = names;
    int bytes = sizeof(names);
    int size = (sizeof(names)/sizeof(names[0]));
    printf ("The size of the array is---> %d and total memory used is %d", size, bytes);
    

    for (int i = 0; i <  size;i++)
    {
         printf("\nThe %d name is %s\n", i+1, (name++)->c_str());
    }
}
       
 