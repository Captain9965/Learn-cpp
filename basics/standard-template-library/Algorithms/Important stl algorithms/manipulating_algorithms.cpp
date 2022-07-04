/*
* For manipulation:
*/
#include <vector>
#include <iostream>
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

int main(){
    vector<int>vec{56, 56, 79, 84, 100,100,100,23, 44, 54, 66, 37};
    //print the vector:
    printvector(vec);
    //sort the vector:
    sort(vec.begin(), vec.end());
    //erase duplicate occurrences in a sorted vector:
    vec.erase(unique(vec.begin(), vec.end()),vec.end());
    //after removind duplicates:
    cout <<"\nAfter removing duplicates-> "<< endl;
    printvector(vec);
    //next permutation:
    next_permutation(vec.begin(), vec.end());
    cout << "After permutation:-> " << endl;
    printvector(vec);
    next_permutation(vec.begin(), vec.end());
    printvector(vec);
    next_permutation(vec.begin(), vec.end());
    printvector(vec);
    prev_permutation(vec.begin(), vec.end());
    cout <<"After previous permutation:-> " << endl;
    printvector(vec);
    //find the position from the first element: useful in finding the index:
    cout <<"Finding the index of 44: " << distance(vec.begin(), find(vec.begin(), vec.end(), 44)) +1 << endl;

    return 0;
}