#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {7, 5, 6, 12, 35};

    cout << "The numbers are: ";
/*Printing array elements
 using range based for loop
 Using int n simply copies the array elements to the variable n during each iteration. 
 This is not memory-efficient.
&n, however, uses the memory address of the array elements
 to access their data without copying them to a new variable.
 This is memory-efficient.
*/
    for (const int &n : numbers) { 
        cout << n << " ,";
    }
    cout<<endl;
}