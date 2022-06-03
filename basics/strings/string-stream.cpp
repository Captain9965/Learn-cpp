/*
* Allows one to read from a string as if it were a stream.
* To use, include the sstream header file
* useful methods:
    clear()- To clear the stream.
    str()- To get and set string object whose content is present in the stream. 
    operator <<- Add a string to the stringstream object. 
    operator >>- Read something from the stringstream object.
* the following example outputs the frequency or words in a string
*/
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>
using namespace std;
 
void printFrequency(string st)
{
    // Each word it mapped to
    // it's frequency
    map<string, int>FW;
   
    // Used for breaking words
    stringstream ss(st);
   
    // To store individual words
    string Word;
 
    while (ss >> Word)
        FW[Word]++;
 
    map<string, int>::iterator m;
    for (m = FW.begin(); m != FW.end(); m++)
        cout << m->first << "-> "
             << m->second << "\n";
}
 
// Driver code
int main()
{
    string s = "Lenny Lenny, are you there there ? ?";
    printFrequency(s);
    return 0;
}