#include <stdlib.h>
#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;
ssize_t  display(int (*func)(const char *__restrict __fmt, ...), const char* data){
    (*func)(data);
    return strlen(data);
}
int main(){  
    ssize_t size = display(printf, "\n=== Passing a function as a pointer ===");
    printf("\nThis is the size of the string copied: %zu", size);
}