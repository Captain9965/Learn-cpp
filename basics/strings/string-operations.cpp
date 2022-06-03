#include <cstdio>
#include <iostream>
 using namespace std;

 int main(){
     std::string name = "Lenny";
     printf("Size of string is --->%lu\n", name.length());
     for (int i = 0; i < name.length() ; i ++){
         printf("%c \n", name[i]);
     }
     return 0;

 }