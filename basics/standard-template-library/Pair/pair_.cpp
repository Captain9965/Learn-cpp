/*
* A pair is used to combine 2 values together that may be of different data-types
* The array of objects stored in map or hash_map is of type 'pair' by default.
*
*
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    //defining a pair:
    pair<string, string> pair1;
    //Method 1 of initializing a pair:
    pair1.first = "Name: ";
    pair1.second = "Lenny";
    //display the pair contents:
    cout << "\n The key is: " << pair1.first << "\nThe value is: " << pair1.second <<endl;

    //Method 2 of initializing a pair:
    pair1= make_pair("Class", "One");
    //display the pair contents:
    cout << "\n The key is: " << pair1.first << "\nThe value is: " << pair1.second << endl;
    //Method 3 of initializing a pair:
    pair1 = {"Month", "June"};
    //display the pair contents:
    cout << "\n The key is: " << pair1.first << "\nThe value is: " << pair1.second <<endl;
    //Method 4 of initializing a pair:
    pair<string, string> pair2("School", "Cedar Groove Junior Academy");
    //display the pair contents:
    cout << "\n The key is: " << pair2.first << "\nThe value is: " << pair2.second;
    //using tie which creates lvalue references to its argument ie to unpack the pair into seperate variables:
    string first, second;
    tie(first, second) = pair1;
    cout <<"\nUnpacking the pair-> " << first  << "\t" << second << endl;

    //one can choose to ignore:
    tie(first, ignore) = pair2;
    cout <<"\nUnpacking the pair-> " << first  << "\t" << "ignored"<< endl;
    


    return 0;
}