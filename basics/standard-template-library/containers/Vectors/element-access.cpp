/*
reference operator[g]- returns a reference to the element position at g
at(g)- same as above
front()- returns a reference to the first element in the vector
back()- returns a reference to the last element in the vector
data()- returns a direct pointer to the memory array used internally by the vector to store its owned elements

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> marks;
    for (int i = 0 ; i < 10; i++){
        marks.push_back( i*2);
    }

    //reference operator:
    cout << "\nReference operator marks[9]:  "<< marks[9] <<endl;
    //using at():
    cout << "Using at(9): "<< marks.at(9)<< endl;
    //using front():
    cout << "Using front(): "<< marks.front()<<endl;
    //using back():
    cout << "Using back(): "<< marks.back()<< endl;
    //Using data():
    cout << "Using data():" << ++*(marks.data())<< endl;
    return 0;
}