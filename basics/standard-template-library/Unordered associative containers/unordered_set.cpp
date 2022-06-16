/*
* Is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion
* is always randomized. They provide constant time lookup operation 
* It can contain a key of any type..even user defined
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int showunordered_set(unordered_set<int> &s){
    if (!s.empty()){
         for (unordered_set<int>::iterator it = s.begin() ; it != s.end() ; it++){
        cout << *it << " " ;
    }
    cout << endl;
    } else{
        cout << " The unordered_set is empty!" << endl;
    }
    return s.size();
}

int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(69);
    s.insert(80);
    s.insert(5);
    //note that only one of the following will be added to the unordered_set:
    s.insert(50);
    s.insert(50);
    showunordered_set(s);
    //assigning elements of s to s1:
    unordered_set<int> s1(s.begin(), s.end());
    showunordered_set(s1);
    //remove all elements up to 30:
    s.erase(s.begin(), s.find(50));
    cout << " \n After removal of elements up to 50: "<< endl;
    showunordered_set(s);
    //erase an element:
    s.erase(80);
    cout << "\n After removing 80: "<< endl;
    showunordered_set(s);
    cout << " \n Is 50 present in the unordered_set? " << s1.count(50) << endl;



    return 0;
}