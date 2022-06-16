/*

They are more useful in the removal, insertion, and moving operations compared to other containers, 
allowing time constant insertion and removal of elements. 
* It differs from the list in that it only keeps track of the next element and not the previous one.
* its drawbacks are that it cannot be used for backward iterations and its elements cannot be directly accessed
* Preferred over the list for the same reason as the singly linked list is preferred over the doubly linked list as one can save space...
* Operations on the forward_list:

*/
#include <forward_list>
#include <iostream>

using namespace std;
int printflist(forward_list<int> & flist_){
    if (!flist_.empty()){
        cout << "\nElements are: ";
        for (forward_list<int>::iterator it = flist_.begin(); it != flist_.end(); it++){
            cout << *it << " ";
        }
        cout <<"\n" << endl;
        return flist_.max_size();
    }
    else{
        cout<< "the forward_list is empty"<<endl;
        return -1;
    }
}
int main(){
    //decalare the forward list and add elements:
    forward_list<int> flist, flist2;
    for (int i = 0; i < 10 ; i++){
        flist.push_front(i*2);
    }
    //see the contents:

    printflist(flist);
    flist.clear();
    cout << "\nassigning values using assign():" << endl;
    //assigning values using assign():
    flist.assign({1,2,3});
    printflist(flist);
    flist.clear();
    cout << "\nassigning repeated values using assign():" << endl;
    //assign repeated values using assign():
    flist.assign(5,10);
    // see the contents:
    printflist(flist);
    cout << "\nassigning values to flist2:" << endl;
    //assign values to flist2:
    flist2.assign(6, 20);
    printflist(flist2);
    cout << "\nassigning values of flist1 to flist1 using assign():" << endl;
    //assign values of flist2 to  flist1:
    flist.assign(flist2.begin(), flist2.end());
    printflist(flist);

    //using emplace_front(), no copy operation occurs unlike push_front()
    cout << "\nusing emplace_front():" << endl;
    flist.emplace_front(40);
    printflist(flist);

    //using pop_front():
    cout << "\nusing pop_front():" << endl;
    flist.pop_front();
    printflist(flist);

    //using insert_after() to insert after the first element. one can use emplace_after() instead:
    cout << " \nUsing insert_after(), flist.insert_after(flist.begin(), {1,2,3}):" << endl;
    flist.insert_after(flist.begin(), {1,2,3});
    printflist(flist);

    //deleting values using erase_after();
    cout << "\n Deleting values using erase_after(): "<< endl;
    flist.erase_after(flist.begin());
    printflist(flist);
    //deleting all the value in a range:
    cout <<"\nDeleting values in a range such as flist.begin() and flist.end():"<<endl;
    flist.erase_after(flist.begin(),flist.end());
    printflist(flist);
    //remove():
    cout << "\n Removing an element from a forward list: "<<endl;
    flist.assign({10,20,40,60});
    flist.remove(10);
    printflist(flist);

    //remove_if(), with condition

    flist.remove_if([](int x){
        return x < 40;
    });
    cout <<"\nRemove_if():"<< endl;
    printflist(flist);

    //splice_after(), which transfers elements from one list to another:
    flist.splice_after(flist.begin(),flist2);
    cout << "\n Splice_after():"<< endl;
    printflist(flist);
    return 0;
}