/*
* Is a widely used searching algorithm that requires the array to be sorted
* before the search is applied. 
* How it works is that it keeps dividing the array in half until the element is found
* or all elements are exhausted. 
* It compares the middle element of the array with our target, if it matches, it returns true 
* otherwise, if the middle term is greater than the target, the search is performed on the left side of the array
* if it is larger, the search is performed on the right hand side of the sub-array
* Example:

*/
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int printvector(vector<int> & vec){
    if (!vec.empty()){
        cout << "\nElements are: ";
        for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
            cout << *it << " ";
        }
        cout <<"\n" << endl;
        return vec.size();
    }
    else{
        cout<< "the vector is empty"<<endl;
        return -1;
    }
}

int main() {
    vector<int> vec{4, 5, 6, 7, 9, 30, 20, 30, 56};
    //display the vector contents:
    printvector(vec);
    //sort the vector:
    sort(vec.begin(), vec.end());
    //display the vector contents after sorting:
    printvector(vec);
    if (binary_search(vec.begin(), vec.end(), 30)){
        cout << "\nThe element exists!!" << endl;
    } else{
        cout << "\nThe element is not in the vector!!" << endl;
    }

    
    return 0;
}