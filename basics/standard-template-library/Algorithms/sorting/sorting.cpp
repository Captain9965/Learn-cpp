/*
* It means arranging the data in a particular fashion, whether increasing or decreasing order..
*/
#include <bits/stdc++.h>
#include <algorithm>

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
    //initializing a vector:
    vector <int> vec = {3, 4, 5, 7, 56, 10, 0, 4, 3, 2, 5, 8, 9, 3};
    vector<int>::iterator it;
    printvector(vec);
    //sort using the sort algorithm then display the result:
    sort(vec.begin(), vec.end());
    printvector(vec);
    return 0;

}