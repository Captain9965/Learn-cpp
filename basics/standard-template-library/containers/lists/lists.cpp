/*
these are sequence containers that allow for 
non-contiguous memory allocation. compared to a list, 
has slow traversal but once the location has been found it has relatively 
faster insertion and deletion.
*/

/****************************lists vs vectors***********************************************
* A vector is internally implemented as an array hence it stores elements in contiguous memory locations
*and can be easily traversed using iterators and randomly accessed by providing the index..Default mem is allocated for the array
*Lists on the other hand internally implement the doubly linked list and hence store elements by 
* having the afddress for the next and previous elements in order for easy forward and backward traversal
*for every new insertion of an element, memory is dynamically allocated and is linked with the nodes of 
*other elements and therefore no need for default mem allocation
* While insertion and deletion of elements takes constant times regardless of position in a list, it takes constant time 
* only at the end and beginning of vectors as the array needs to be traversed
* In addition to storing the elements, lists store pointers to the next and previous nodes and hence use more memory
* One can randomly access the elements of a vector as only the index is needed while for a list, one needs to traverse the pointers
* Iterators remain valid in lists even when elements are inserted or removed from it.
* Lists are not thread safe
*/
#include <iostream>
#include <list>
#include <iterator>

using namespace std;


int printlist(list<int> & list_){
    if (!list_.empty()){
        cout << "\nElements are: ";
        for (list<int>::iterator it = list_.begin(); it != list_.end(); it++){
            cout << *it << " ";
        }
        cout <<"\n" << endl;
        return list_.size();
    }
    else{
        cout<< "the list is empty"<<endl;
        return -1;
    }
}

int main(){
    //declare a list:
    list<int> pb, pf;
    //populate the list:
    for (int i ; i < 10; i ++){
        pb.push_back(i + 4);
        pf.push_front(i +3);
    }
    printlist(pb);
    printlist(pf);

    /*
    element access functions:
    */
    cout << " pb.back(): " << pb.back() << endl;
    cout << " pb.front(): " << pb.front() << endl;
    // modifiers:
    pb.pop_back();
    cout << " After pb.pop_back() " << endl;
    printlist(pb);
    pb.pop_front();
    cout << " After pb.pop_front() " << endl;
    printlist(pb);
    pb.reverse();
    cout << " After pb.reverse() " << endl;
    printlist(pb); 
    pb.sort();
    cout << " After pb.sort() " << endl;
    printlist(pb);
    return 0;
}