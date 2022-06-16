/*
* This is an adapter container designed such that the first element of the queue is the greatest of all elements in the queue
* And elements are in non-increasing order
*/

#include <iostream>
#include <queue>

using namespace std;
int showqueue(priority_queue<int>_queue){
    priority_queue<int> q = _queue;
  while (!q.empty())
  {
      cout << q.top() << " ";
      q.pop();
  }
  return _queue.size();
  
}

int main(){
    priority_queue<int> q1, q2;
    q1.push(20);
    q1.push(30);
    q1.push(10);

    //show the priority queue:
    showqueue(q1);

    cout <<"\nThis is the element at the top of the priority queue: " << q1.top();
    return 0;
}