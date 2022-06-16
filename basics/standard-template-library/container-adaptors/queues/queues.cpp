/*
* Contaniner adaptors provide a different interface for accessing sequence containers
* Queues are a type of adaptor that operate in a FIFO type of arrangement.
* Elements are inserted at the backend and deleted from the front:
* Queues use an encapsulated object of deque or list as its underlying container
* Example: 
*/
#include <iostream>
#include <queue>

using namespace std;

int showqueue(queue<int>_queue){
    queue<int> q = _queue;
  while (!q.empty())
  {
      cout << q.front() << " ";
      q.pop();
  }
  return _queue.size();
  
}
int main(){
    queue<int> q1,q2;
    for (int i=0;i<10;i++){
        q1.push(i);
    }
    //print the queue:
    showqueue(q1);
    //show the front of the queue:
    cout<< "\nThis is the element at the front of the queue: " << q1.front() << endl;
    cout << "\n This is the element at the back of the queue: " << q1.back() << endl;
    //pop an element:
    q1.pop();
    cout << "\n Front of the queue after pop: " << q1.front() << endl;
    return 0;

}
