/*
* This type of container adaptor with LIFO type of working...
* And element is added at the top and removed at that end only. 
* It encapsulates an object of either queue, list of vector..(dequeue by default)
* Illustration:
*/

#include <iostream>
#include <stack>
#include <list>

using namespace std;

void showstack(stack<int> _stack){
    stack<int> stack_ = _stack;
    while (!stack_.empty()){
        cout << "\t" << stack_.top();
        stack_.pop();
    }
    return;
}

int main(){
    //stack init with a list container;
    stack<int> _stack;
    //push elements into the stack:
    _stack.push(40);
    _stack.push(30);
    _stack.push(100);
    //display stack:
    showstack(_stack);

    cout << " \nThis is the top of the stack: " << _stack.top();
    //pop an element:
    _stack.pop();
    cout << "\nThis is the element now at the top of the stack: "<< _stack.top();
    //readd the element:
    _stack.emplace(100);
    cout << "\n This is the element now on top of the stack after readding the element: " << _stack.top() << endl; 
    return 0;
}
