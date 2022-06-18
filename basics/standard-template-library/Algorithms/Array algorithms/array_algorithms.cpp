/*
* Good to know algorithms for competitive coding and to save time during development:
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

int main(){
    vector<int> vec{67, 56, 45, 89, 54, 67, 89};
    //all_of checks for a property on every element in an array, for example, checking whether all constituent elements are positive:
    all_of(vec.begin(), vec.end(), [](int x ){return x>0;}) ? cout<< "All the numbers in the vector are positive" << endl : cout <<"Not all the numbers are positive"<< endl;
    //any_of checks for a property being true for any element: 
    any_of(vec.begin(), vec.end(), [](int x ){return x<0;}) ? cout<< "One of the numbers is negative" << endl : cout <<"None of the numbers are negative"<< endl;
    //none_of returns true if none of the elements satisfy the given condition:
    none_of(vec.begin(), vec.end(), [](int x ){return x == 45;}) ? cout<< "None of the numbers is 45" << endl : cout <<"At least one of the numbers is 45"<< endl;
    //assign continuous values to an array:
    vector<int> vec2;
    vec2.assign({0,0,0});
    iota(vec2.begin(), vec2.end(), 45);
    printvector(vec2);


}