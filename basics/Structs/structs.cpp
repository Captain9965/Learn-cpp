
/* structures
*When a structure is created, no memory is allocated
*/
#include <cstdio>
#include <iostream>
using namespace std;

void sum(int x, int y){
    printf("\nThe sum of the two numbers is %d \n", (x+y));
}

void subract(int x, int y){
    printf("\nThe difference of the two numbers is %d \n", (x>y? (x-y):(y-x)));
}

int main(){
    typedef struct Math{
        int a;
        int b;
        void(*func)(int a, int b);

    }math_t;

math_t execute{4,2,sum};
execute.func(execute.a, execute.b);
execute.a = 11;
execute.b = 9;
execute.func = subract;
execute.func(execute.a, execute.b);
}
