#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    Distance *ptr, d;

    ptr = &d;
    
    cout << "Enter feet: ";
    cin >> ptr->feet;
    cout << "Enter inch: ";
    cin >> ptr->inch;
 
    cout << "Displaying information." << endl;
    //both methods(*ptr).inch and ptr->inch to access class and struct members can be used
    cout << "Distance = " << ptr->feet << " feet " << (*ptr).inch << " inches"<<endl;
    

    return 0;
}