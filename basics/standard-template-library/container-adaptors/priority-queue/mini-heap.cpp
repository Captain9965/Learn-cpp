/*
* cpp provides the following syntax:
* priority_queue <int, vector<int>, greater<int>> g = gq;
*/

#include <iostream>
#include <queue>

using namespace std;

int showpq(priority_queue< int, vector<int >,greater<int >> _pq){
    priority_queue< int, vector<int >,greater<int >> pq = _pq;
    while (!pq.empty()){
        cout << '\t' << pq.top();
        pq.pop();
    }
    cout << '\n' << endl;
    return _pq.size();
}

int main(){
    priority_queue<int, vector<int>,greater<int>> pq;
    pq.push(50);
    pq.push(40);
    pq.push(70);
    showpq(pq);
    cout << "\n On top of the pqueue is: " << pq.top() << endl;
    pq.pop();
    cout << "\n Now on top of the queue after pop operation: " << pq.top() << endl;
    return 0;
}