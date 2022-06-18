/*
* A tuple is an object that can hold a number of elements and they can be of different data types
* The elements of a tuple are initialized in the order in which they are to be accessed. 
* Illustrations:

*/
#include <iostream>
#include <tuple>

using namespace std;

int main(){
    tuple<string, int, string, int> tp, tp1;
    //assigning elements method1:
    tp = make_tuple("Apple", 4, "mangoes", 6);
    //displaying the values of the tuple elements:
    cout << "\nTuple elements: " << get<0>(tp) << "\t"<< get<1>(tp) << endl;
    //modifying elements in a tuple:
    get<0>(tp) = "Oranges";

    cout <<"\nModifying the first element in a tuple: " << get<0>(tp) << endl;
    //size of the tuple( the number of elements present in the tuple:)
    cout <<"\nThe size of the tuple is: " << tuple_size<decltype(tp)>::value << " and is of type: " << typeid(tuple_size<decltype(tp)>::value).name()<<endl;
    //swapping tuples:
    tp.swap(tp1);
    cout <<"\n After swapping tp with tp1: " << "first element of tp1 is: " << get<0>(tp1) << endl;
    //copying:
    tp = tp1;
    cout << "\nAfter copying contents of tp1 to tp, the first element of tp is: " << get<0>(tp) << endl;
    //unpacking tuple members with tie, note that the keyword ignore can be used to ignore certain elements that you do not want unpacked:
    string fruit1, fruit2;
    int int_fruit1, int_fruit2;
    
    tie(fruit1, int_fruit1, fruit2, int_fruit2) = tp;
    //display the unpacked elements:
    cout <<"\n After unpacking: " << fruit1 <<"\t"<< int_fruit1 <<"\t"<<fruit2 <<"\t"<< int_fruit2 << endl;
    //cocatenate 2 tuples using tuple_cat():
    auto new_tp = tuple_cat(tp, tp1);
    
    return 0;
}