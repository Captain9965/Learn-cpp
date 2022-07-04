/*
* Allows us to partition containers
* Illustration:
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
    vector<int> vec{ 2, 1, 5, 6, 8, 7 };
    printvector(vec);
    //checking whether a vector is partitioned according to evenness:
    is_partitioned(vec.begin(), vec.end(),[](int x){
        return x%2 == 0;
    }) ? cout <<"The vector is partitioned" << endl : cout<< "The vector is not partitioned " << endl;

    //now lets partition according to evenness:
    partition(vec.begin(), vec.end(),[](int x){
        return x%2 == 0;
    });
    //lets check again:

    is_partitioned(vec.begin(), vec.end(),[](int x){
        return x%2 == 0;
    }) ? cout <<"The vector is partitioned" << endl : cout<< "The vector is not partitioned " << endl;
    cout <<"After partition: " << endl;
    printvector(vec);
    //stable partiion does the same thing while perserving the relative order:
    cout << "Performing a stable partition: " << endl;
    vector<int> vec2{ 2, 1, 5, 6, 8, 7 };
    stable_partition(vec2.begin(), vec2.end(),[](int x){
        return x%2 == 0;
    });
    printvector(vec2);
    auto it =  partition_point(vec2.begin(), vec2.end(),[](int x){
        return x%2 == 0;
    });

    cout <<"This is the partition point: " << *it << endl;
    vector<int> vec3(it, vec2.end());
    cout<< "This is the partitioned vector: " << endl;
    printvector(vec3);
    vector<int> outtrue, outfalse;
    
    //resizing containers for it to work:
    int n = count_if(vec2.begin(), vec2.end(),[](int x){
        return x%2 == 0;
    });
    outtrue.resize(n);
    outfalse.resize(vec2.size()-n);
    partition_copy(vec2.begin(), vec2.end(),outtrue.begin(),outfalse.begin(),[](int x){
        return x%2 == 0;
    });
    cout <<"\nNew vectors after partition_copy:" << endl;
    printvector(outtrue);
    printvector(outfalse);

    return 0;
}