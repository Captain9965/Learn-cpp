#include "cstdio"
#include "iostream"
#define AVG_COUNT  4
using namespace std;

bool discard(int datapoint, ssize_t size, int *arr){
        int counter = 0;
     for (int i = 0; i < size; i++ ){
         int diff = abs(datapoint - arr[i]);
         cout << "diff-> " << diff << endl;
        if ( diff > 1000){
            cout << "Possible outlier->" << datapoint << endl;
            counter ++;
        }
    }
    if (counter > 2 ){
        cout << "This is definitely an outlier->" <<  datapoint<< endl;
        return true;
    } else{
        return false;
    }
    return false;
}

int main(){

    int average = 0;
    int data[AVG_COUNT] = {3000, 3100, 3600, 380};
    int count = AVG_COUNT;
    ssize_t size = sizeof(data)/sizeof(data[0]);
    cout << "size->" << size << endl;
    for (int i = 0; i < AVG_COUNT; i++ ){
        if (discard(data[i], size, data)){
            cout << "Discarded->" << data[i] << endl;
            count--;
            continue;
        }
        average += data[i];
    }
    cout << "final count is -> " << count << endl;
    cout << " the average is " << average/count << endl;
    return 0;
}