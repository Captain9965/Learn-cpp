/*
size() - returns the number of elements in the vector
max_size() - returns the maximum number of elements that the vector can hold
capacity() - returns the current space allocated to the vector expressed as the number of elements
resize(n) - resizes the containers so that it contains 'n' number of elements
empty() - returns whether the container is empty
shrink_to_fit()- reduces the capacity of the container to fit its size and destroys all elements beyond the capacity
reserve() - request that the vector size be at least enough to contain n elements

examples:
*/
#include <iostream>
#include <vector>

using namespace std;

int printvector(vector<int> & vec);
int main(){
    vector<int> marks;

    for (int i=0; i< 10; i++){
        marks.push_back(i+50);
    }

    //number of elements:

    cout <<" \nThis is the nummber of elements contained in the vector: "<< marks.size();
    printvector(marks);
    //maximum size:
    cout << "\n This is the maximum size of the vector: " << marks.max_size();
    //This is the capacity of the vector:
    cout << "\n Capacity "<< marks.capacity() << " size in bytes: " << marks.capacity() * sizeof(int);
    //shrink_to_fit():
    marks.shrink_to_fit();
    cout << "\n Shrink to fit new capacity: "<< marks.capacity() << endl;
    //reserve():
    marks.reserve(20);
    cout<< " Capacity after reserve: "<< marks.capacity()<< endl;
    //resize():
    marks.resize(3);
    cout << " \n"<<printvector(marks) << "capacity: "<< marks.capacity() <<endl;
    return 0;
}

int printvector(vector<int> & vec){
    if (!vec.empty()){
        cout << "\nElements are: ";
        for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
            cout << *it << " ";
        }
        return vec.size();
    }
    else{
        cout<< "the vector is empty"<<endl;
        return -1;
    }
}