/*
* they are used to point to memory addresses of stl containers
* They reduce the complexity and execution time of programs
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vec{4, 5, 6, 7,8, 10, 9};
    vector<int> vec2{5, 6};
    vector<int>::iterator it = vec.begin();
    advance(it, 3);
    //after advancing:
    cout <<"\nAfter advance(it,3), the pointer points to: " << *it <<endl;
    //using next and previous which return a new iterator:
    cout <<"\nnext(it,3): " << *next(it,3) << "\tprevious(it, 3): " << *prev(it, 3) << endl;
    //using inserter:
    copy(vec.begin(), vec.end(),inserter(vec2, next(vec2.begin(),2)));
    //display the result:
    for(int &x : vec2){
        cout <<"\t"<< x;
    }
    return 0;
}