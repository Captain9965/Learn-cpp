/*
* introduced in cpp 98 to hold and provide mathematical operations on arrays efficiently.
* More effiient than vectors in certain mathematical operations
*/
#include <bits/stdc++.h>
#include <iterator>

using namespace std;
int printvalarray(valarray<int> & val){
        cout << "\nElements are: ";
        for (int i = 0; i < val.size(); i++){
            cout << val[i] << " ";
        }
        cout <<"\n" << endl;
        return val.size();
}
int main(){

    valarray<int> val{4, 5,7,7};
    printvalarray(val);

    //using apply to apply the function specified in its argument. Note that it returns a new array.
    valarray<int> val2 = val.apply([](int x){
        return x+5;
    });
    printvalarray(val2);

    //getting the sum of an array:
    cout << "The sum of all elements in the new array is-> " << val2.sum() << endl;
    cout << "The smallest element is "<<val2.min()<< " ,while the largest element is "<< val2.max() << endl;
    //shifting operations:
    valarray<int> leftshiftval = val2.shift(3);
    cout <<"Left shifting: "<< endl;
    printvalarray(leftshiftval);
    valarray<int> rightshiftval = val2.shift(-3);
    cout <<"Right shifting: "<< endl;
    printvalarray(rightshiftval);

    //circular shifting:
    valarray<int> circular_left =val2.cshift(3);
    cout <<"Left circular shifting: "<< endl;
    printvalarray(circular_left);
    valarray<int> circular_right = val2.cshift(-3);
    cout <<"Right circular shifting: "<< endl;
    printvalarray(circular_right);

    //swapping:
    swap(circular_left, circular_right);
    cout <<"After swapping the 2 valarrays: "<< endl;
    printvalarray(circular_right);



    return 0;
}