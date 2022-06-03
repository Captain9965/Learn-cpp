/*
*these are dynamic arrays with the ability ro resize themselves when an element is inserted or deleted
*their elements are placed in contiguous memory space and hence can be accessed and traversed using iterators
*Data is inserted at the end and this takes differential time as the vector may need to be extended. Removing the 
 last element takes constant time as no resizing happens.
* Inserting and removing at the beginning or the middle is linear in time.
* vector functions:
    begin() – Returns an iterator pointing to the first element in the vector
    end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    cbegin() – Returns a constant iterator pointing to the first element in the vector.
    cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> marks;
    for (int i = 0; i < 10; i++){
        marks.push_back(55+i);
    }

    //confirm that the vector is not empty:
    if (!marks.empty()){
        cout << "Output of begin and end ";
        for (vector<int>::iterator it = marks.begin(); it != marks.end(); it++){
            cout << *it << " ";
        }
        cout << "\n Output of rbegin and end ";
        for (auto it = marks.rbegin(); it != marks.rend(); it ++){
            cout << *it << " ";
        }
    }
    
}   