/*
* these are the most common non_manipulating algorithms used in compeititve programming:
*/
#include <bits/stdc++.h>
#include <numeric>

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
    cout << "The vector after sorting-> " << endl;
    printvector(vec);
    cout << "After reversing-> " << endl;
    reverse(vec.begin(), vec.end());
    printvector(vec);
    cout <<"Maximum element-> " << *max_element(vec.begin(), vec.end()) << endl;
    cout <<"Minimum element-> " << *min_element(vec.begin(), vec.end()) << endl;
    //summation:
    int sum = accumulate(vec.begin(), vec.end(), 0);
    cout << "\n the accumulated sum from 0 is -> " << sum << endl;
    //find occurrences of an element:
    cout << "\nThe number 100 appears "<< count(vec.begin(), vec.end(), 100) << " times" << endl;
    //finding an element:
    find(vec.begin(), vec.end(),66) != vec.end() ? cout << " The element is there " << endl : cout << " The element is not present " << endl;
    //lower and uppper bound:
    sort(vec.begin(), vec.end());
    printvector(vec);
    auto lb = lower_bound(vec.begin(), vec.end(), 100);
    auto ub = upper_bound(vec.begin(), vec.end(), 100);
    cout << "Lower bound of 100 is-> " << lb-vec.begin() << " \tAnd the upper bound of 100 is-> " << ub-vec.begin() << endl;
    return 0;
}