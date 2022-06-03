/*
* It is a predefined funtion for string handling and it returns 
  a pointer to the last occurrence of a character in a string
* It takes the string as the first argument and the character we want to find as the second argument
* It returns the last string after the lase occurrence of the character of interest
*/
#include <cstring>
#include <cstdio>
#include <iostream>

using namespace std;
int main(){

    char* name = "Lennytrudywe";
    char* pos = strchr(name, 'y');
    cout << "Input String: " << name << endl;
    cout << "Output: "  << pos - name + 1 << endl;
    name = NULL;
    return 0;
}