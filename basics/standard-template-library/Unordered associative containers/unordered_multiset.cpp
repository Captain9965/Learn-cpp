/*
* similar to the unordered set, the only difference being the ability to store duplicate elements
* Due to hashing of elements, it has no particular order of storing elements, however, duplicate elements come together.
* All operations take constant time on average but can go up to linear in worst cases.
*/
#include <bits/stdc++.h>
using namespace std;

int showunordered_multiset(unordered_multiset<int> &s){
    if (!s.empty()){
         for (unordered_multiset<int>::iterator it = s.begin() ; it != s.end() ; it++){
        cout << *it << " " ;
    }
    cout << endl;
    } else{
        cout << " The unordered_multiset is empty!" << endl;
    }
    return s.size();
}

int main(){
    unordered_multiset<int> s;
    s.insert(10);
    s.insert(69);
    s.insert(80);
    s.insert(5);
    //note that both will be added to the unordered_multiset:
    s.insert(50);
    s.insert(50);
    s.insert(80);
    showunordered_multiset(s);
    //assigning elements of s to s1:
    unordered_multiset<int> s1(s.begin(), s.end());
    showunordered_multiset(s1);
    //remove all elements up to 30:
    s.erase(s.begin(), s.find(50));
    cout << " \n After removal of elements up to 50: "<< endl;
    showunordered_multiset(s);
    //erase an element:
    s1.erase(80);
    cout << "\n After removing 80: "<< endl;
    //check for presence of a number in the unordered_multiset:
    cout << " \n Is 50 present in the unordered_multiset? " << s1.count(50) << endl;
    //remove all instances of elements having the same value:
    s1.erase(s1.find(50));
    cout << "\nRemove one instance of element from unordered_multiset having the same value of 50: "<< endl;
    showunordered_multiset(s1);
    s1.insert(50);
    //using erange:
    pair<unordered_multiset<int>::iterator, unordered_multiset<int>::iterator> erange_it = s1.equal_range(50);
    if (erange_it.first != erange_it.second){
        cout << 50 << "\tAppeared at least once in the unordered multiset" << endl;
    } 
    return 0;
}