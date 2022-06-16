/*
* In general, associative containers implement sorted data structures that can be quickly searched( 0(log n ) complexity)
* Sets are a type of associative container in which each element has to be unique because that is how it is identified
* properties:
    1. The values are stored in sorted order.
    2. All elements have unique values.
    3. Set values are immutable, though one can remove a value and add a modified one.
    4. Follow the binary search tree implementation.
    5. Values in a set are unindexed.
*/
#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int showset(set<int> &s){
    if (!s.empty()){
         for (set<int,less<int>>::iterator it = s.begin() ; it != s.end() ; it++){
        cout << *it << " " ;
    }
    cout << endl;
    } else{
        cout << " The set is empty!" << endl;
    }
    return s.size();
}

int main(){
    set<int> s;
    s.insert(10);
    s.insert(69);
    s.insert(80);
    s.insert(5);
    //note that only one of the following will be added to the set:
    s.insert(50);
    s.insert(50);
    showset(s);
    //assigning elements of s to s1:
    set<int, less<int>> s1(s.begin(), s.end());
    showset(s1);
    //remove all elements up to 30:
    s.erase(s.begin(), s.find(50));
    cout << " \n After removal of elements up to 50: "<< endl;
    showset(s);
    //erase an element:
    s.erase(80);
    cout << "\n After removing 80: "<< endl;
    showset(s);
    //check lower bound and uppper bound:
    cout<< "\n Upper bound of s1: " << *(s1.upper_bound(70)) << " Lower bound of s1 " << *(s1.lower_bound(1))<<endl;
    //check for presence of a number in the set:
    cout << " \n Is 50 present in the set? " << s1.count(50) << endl;



    return 0;
}
