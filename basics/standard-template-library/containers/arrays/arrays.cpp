/*
Cpp arrays have the following advantages over c style arrays:
1. They know their size, making it easier to pass to functions
2. They do not decay to pointers
3. Generally more efficient, light-weight and reliable than c-style arrays
 General array operations:
    > at() - used to access tha elements of an array
    > get() - access elements of an array....an overloaded funcion from the tuple class
    > operator[] - also accesses the elements
Example: 
*/
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

int main(){
    array<int, 6> arr;
    for (int i = 0; i < 6 ; i++){
        arr.at(i) = i*2;
        cout << "Element " << i << " is "<< arr.at(i)<<endl;
    }

    //method 2 of initializing arrays:
    array <int, 6> arr2 = {3, 4, 5, 7};
    array<int, 6 >::iterator it;
    cout << "Using an iterator to display the first element --> " << *(it = arr2.begin()) << endl;

    //using back() and front() to get the last and first element of the array:
    
    cout << "Using front()--> " << arr.front() << " Using back()--> " << arr.back() <<endl;
    //using size(): s style arrays do not have this property...
    cout << "Size()--> "<< arr.size() <<endl;
    //swapping arrays:
    arr.swap(arr2);
    cout << "After arr.swap(arr2) --> arr.size()--> "<< arr.size() <<endl;
    //empty(): returns true when the array size is zero
    array<int, 0> arr3;
    if (arr3.empty()){
        cout<< "arr3 is empty" << endl;
    }
    //filling an entire array with a given value:
    // arr3.fill(20); --> segmentation fault..
    arr.fill(20);
    cout << arr.front() <<endl;
    return 0;
}