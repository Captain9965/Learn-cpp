#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    for (int i = 0; i< 10; i++){
        std::string rand_string = to_string((rand() % 30 + 5));
        std::cout<<"The number is:" << rand_string << endl;
    }
   
    return 0;
}