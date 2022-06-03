/*

assign - assigns vector elements by replacing old ones
push_back - push elements into the vector from the back
pop_back - used to pop or remove elements from the back
insert - inserts new elements before elements at the specified position
erase - used to remove elements from  a container from the specified posituion or range
swap - swap contents of one vector with another of the same type
clear - used to remove all elements from a vector container
emplace - used to extend the vector by adding a new element at position
emplace_back()- inserts a new element at the end of the container

*/
#include <iostream>
#include <vector>

using namespace std;

int printvector(vector<int> & vec){
    if (!vec.empty()){
        cout << "\nElements are: ";
        for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
            cout << *it << " ";
        }
        cout <<"\n" << endl;
        return vec.size();
    }
    else{
        cout<< "the vector is empty"<<endl;
        return -1;
    }
}

int main(){
    vector <int> marks, marks2;
    for (int i = 0; i<9 ; i++){
        marks.push_back(i*4);
        marks2.push_back(i*4);
    }
    printvector(marks);
    //using assign:
    marks.assign(10,4);
    cout << "\nafter assign(10,4)" << endl;
    printvector(marks);
    marks.pop_back();
    cout << "After pop_back "<< endl;
    printvector(marks);
    marks.insert(marks.begin() + 4, 10);
    cout << "After insert(marks.begin() + 4, 10)" << endl;
    printvector(marks);
    marks.erase(marks.begin()+4);
    cout << "After erase(marks.begin() + 4)" << endl;
    printvector(marks);
    marks.swap(marks2);
    cout << "After swap(marks2): " << endl;
    printvector(marks);
    marks.clear();
    //hote that the capacity doesn't change!!
    cout << "After clear() size : "<< marks.size() << endl;
    printvector(marks);
    marks.emplace(marks.begin(), 4);
    cout << "After emplace(marks.begin(),4)" << endl;
    printvector(marks);
    marks.emplace_back(5);
    cout << "After emplace_back(5): " << endl;
    printvector(marks);
    exit(0);
}
