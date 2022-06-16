/*
* differs from a set in that multiple elements can have the same value:

*/
#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int showmultiset(multiset<int> &s){
    if (!s.empty()){
         for (multiset<int,less<int>>::iterator it = s.begin() ; it != s.end() ; it++){
        cout << *it << " " ;
    }
    cout << endl;
    } else{
        cout << " The multiset is empty!" << endl;
    }
    return s.size();
}

int main(){
    multiset<int> s;
    s.insert(10);
    s.insert(69);
    s.insert(80);
    s.insert(5);
    //note that both will be added to the multiset:
    s.insert(50);
    s.insert(50);
    showmultiset(s);
    //assigning elements of s to s1:
    multiset<int, less<int>> s1(s.begin(), s.end());
    showmultiset(s1);
    //remove all elements up to 30:
    s.erase(s.begin(), s.find(50));
    cout << " \n After removal of elements up to 50: "<< endl;
    showmultiset(s);
    //erase an element:
    s.erase(80);
    cout << "\n After removing 80: "<< endl;
    showmultiset(s);
    //check lower bound and uppper bound:
    cout<< "\n Upper bound of s1: " << *(s1.upper_bound(70)) << " Lower bound of s1 " << *(s1.lower_bound(1))<<endl;
    //check for presence of a number in the multiset:
    cout << " \n Is 50 present in the multiset? " << s1.count(50) << endl;
    //remove all instances of elements having the same value:
    s1.erase(s1.find(50));
    cout << "\nRemove one instance of element from multiset having the same value of 50: "<< endl;
    showmultiset(s1);
    return 0;
}