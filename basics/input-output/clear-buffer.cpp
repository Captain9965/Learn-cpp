/*
To clear the input buffer, one can use any of the following functions:
1. while(getchar != '\n'); -> it reads the buffer characters till the end and discards them.
2. fflush(stdin); -> clears the input buffer but to be avoided due to being termed as undefined for an input stream

cpp:
3. using cin.ignore(numeric_limits<streamsize>::max()); -> discars everything in the input stream including the new line
4. cin.sync();-> discards all thats left in the buffer though only works in cpp 11 and above
5. cin >> ws: -> tells the compiler to ignore the buffer and also discard  all the whitespaces before the actual content of string or character.

*/
 
#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int a;
    string s;
     
    // Enter input from user -
    // 4 for example
    cin >> a;
     
    // Discards the input buffer and
    // initial white spaces of string
    cin >> ws;
     
    // Get input from user -
    // GeeksforGeeks for example
    getline(cin, s);
     
    // Prints 4 and GeeksforGeeks :
    // will execute print a and s
    cout << a << endl;
    cout << s << endl;
 
    return 0;
}