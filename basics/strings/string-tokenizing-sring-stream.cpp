/*
* this denotes splitting a string with respect to some delimiters
* It associates a string with a stream allowing one to read from s string as if it were a stream
*/
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
     
    string line = "GeeksForGeeks is a must try";
     
    // Vector of string to save tokens
    vector <string> tokens;
     
    // stringstream class check1
    stringstream check1(line);
     
    string intermediate;
     
    // Tokenizing w.r.t. space ' '
    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }
     
    // Printing the token vector
    for(int i = 0; i < tokens.size(); i++)
    {
        cout << tokens[i] << '\n';
    }
        cout << intermediate << endl;
}