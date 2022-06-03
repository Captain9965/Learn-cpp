#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;
void sum_proxy(void (*func)(int x, int y)){
    (*func)(4, 8);
}
class Math{
    public:
        Math(){};
        ~Math(){};
        static void sum_weighted(int x, int y){
           printf("\nThe weighted sum of the two numbers is %d \n", (x*a+ y*b));
           a = 0;
           b = 0;
           printf("A is %d, and b is %d", a, b);
        }
        void pass_member(){
            sum_proxy(sum_weighted);
        }
    private:
         static int a,b;
       
};
int Math::a = 10;
int Math::b = 20;

int main(){
    Math m;
    m.pass_member();

}