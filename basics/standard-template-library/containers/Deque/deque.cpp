/*
These are sequence containers with the feature of expansion and contraction on both ends.
Similar to vectors but are more efficient in insertion and deletion of elements. 
Unlike vectors, contiguous memory allocation may not be guaranteed. A queue data structure only allows insertion at the back and
removal from the front. In double ended queues, this can occur in both ends..
Functions are the same as those of vectors with addition of push and pop operations at both ends..
 Example:

*/
#include <iostream>
#include <deque>
#include<bits/stdc++.h>

using namespace std;

int showdeque(deque<int> q){
    if (!q.empty()){
        cout << "\nElements are: ";
        for (deque<int>::iterator it = q.begin(); it != q.end(); it++){
            cout << *it << " ";
        }
        cout <<"\n" << endl;
        return q.size();
    }
    else{
        cout<< "the queue is empty"<<endl;
        return -1;
    }
}

int main(){
    //declare the dequeue:
    deque<int> deque1, deque2;

    for (int i = 0; i< 10 ; i++){
        deque1.push_back(i*2);
        deque2.push_front(i*2);
    }
    //show the dequeue content:
    showdeque(deque1);

    showdeque(deque2);
    //using pop_front()
    deque2.pop_front();
    cout << " After deque2.pop_front(): " << endl;
    showdeque(deque2);
    //insert
    cout << " After insert(deque1.begin() +4, 2):" << endl;
    deque1.insert(deque1.begin()+4, 2);
    showdeque(deque1);
    //finding elements in a deque
    deque <int>::iterator f = find(deque1.begin(), deque1.end(), 50);
    cout<< " Return after find((deque1.begin(), deque1.end(), 10): " << *f <<endl;

    return 0;
}
