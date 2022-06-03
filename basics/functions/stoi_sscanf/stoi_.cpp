#include <cstdio>
#include <iostream>
using namespace std;

int main(){
     printf("%d",stoi("45666"));
     int i;
     std::string str = "45666";
     printf("\nreturn value---> %d", (sscanf(str.c_str(),"%d",&i)));
     printf("\nvalue---> %d", i);
}