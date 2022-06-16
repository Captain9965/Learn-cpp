/*
* These are associative containers where each element has a key value and a mapped value
* No 2 mapped values can have the same key.
*demonstration:
*/
#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int showmap(map<const char*, int> &map_){
    if (!map_.empty()){
        for (map<const char*, int>::iterator it = map_.begin(); it != map_.end(); it++){
            cout << "\nKey\t" << it->first << "\tValue\t" << it->second<<endl;
        }
    }else{
        cout << "\n The map is empty " << endl;
    }
    return map_.size();
}

int main(){

    map<const char*, int> map_, map2;
    map_.insert(pair<const char*, int>("Maths", 100));
    map_.insert(pair<const char*, int>("English", 88));
    map_.insert(pair<const char*, int>("Kiswahili", 90));
    map_.insert(pair<const char*, int>("Electricity", 70));
    showmap(map_);
    cout << "\nInitialize elements of one map with another: "<< endl;
    map2.insert(map_.begin(), map_.end());
    showmap(map2);

    //erase all elements less than key = "English"
    map2.erase(map2.begin(), map2.find("Kiswahili"));
    cout << "\nAfter erasing elements up to the one with key = \"Kiswahili\" "<<endl;
    showmap(map2);
    cout << "\nRemove all elements with key = \"Electricity\" "<< endl;
    map2.erase("Electricity");
    showmap(map2);

    //lower and uppper bound for key = "Kiswahili";
    cout <<"\nLower bound(\"Kiswahili\") "<< map_.lower_bound("Kiswahili")->second << "\tUpper bound(\"Kiswahili\") " << map_.lower_bound("Kiswahili")->second<<endl;
    return 0;
}