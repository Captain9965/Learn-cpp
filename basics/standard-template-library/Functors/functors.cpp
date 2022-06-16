/*
* these are objects that can be treated as though they are a function or function pointer.
* To create a functor, we create an object that overloads the operator ()
*/
#include <bits/stdc++.h>
using namespace std;

class increment
{
    private:
        int num;
    public:
        increment(int n): num(n){};
        int operator ()(int arr_num) const{
            count++;
            return num + arr_num;
        }
        static int  get_count(){
            return count;
        }
        static int count;
};
int increment::count = 0;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int to_add = 5;
    transform(arr,arr+size,arr,increment(to_add));
    for (int i=0; i<size; i++){
        cout << arr[i] <<endl;
    }
    cout << "The count is -> "<< increment::get_count() <<endl;

    return 0;
}