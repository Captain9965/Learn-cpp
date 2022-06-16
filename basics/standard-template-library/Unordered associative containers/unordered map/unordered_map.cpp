/*
* Generally like the map. However, its keys are hashed and therefore elements are stored in no particular order
* 
*/
#include <iostream>
#include <unordered_map>
#include <iterator>

using namespace std;

int showunordered_map(unordered_map<const char*, int> &unordered_map_){
    if (!unordered_map_.empty()){
        for (unordered_map<const char*, int>::iterator it = unordered_map_.begin(); it != unordered_map_.end(); it++){
            cout << "\nKey\t" << it->first << "\tValue\t" << it->second<<endl;
        }
    }else{
        cout << "\n The unordered_map is empty " << endl;
    }
    return unordered_map_.size();
}

int main(){

    unordered_map<const char*, int> unordered_map_, unordered_map2;
    // unordered_map_.insert(pair<const char*, int>("Maths", 100));
    // unordered_map_.insert(pair<const char*, int>("English", 88));
    // unordered_map_.insert(pair<const char*, int>("Kiswahili", 90));
    // unordered_map_.insert(pair<const char*, int>("Electricity", 70));
    unordered_map_["Mathematics"] = 100;
    unordered_map_["English"] = 200;
    unordered_map_["French"] = 400;
    showunordered_map(unordered_map_);
    cout <<"\n The size of the unordered map is "<< unordered_map_.size() <<endl;
    cout << "\nInitialize elements of one unordered_map with another: "<< endl;
    unordered_map2.insert(unordered_map_.begin(), unordered_map_.end());
    showunordered_map(unordered_map2);
    //change an element:
    unordered_map_["English"] = 500;
    cout << "\nAfter changing English to 500: " <<endl;
    showunordered_map(unordered_map_);
    //changing an element using find:
    cout << "\nFind English-> " << unordered_map_.find("English")->second << endl;
    //change English to 600:
    if (unordered_map_.find("English") != unordered_map_.end()){
            unordered_map_.find("English")->second = 600;
    } else{
        cout <<"\nNot found" << endl;
    }
    
    cout << "\nFinding English again->"<< unordered_map_.find("English")->second <<endl;    
    //erase all elements less than key = "English"
    unordered_map2.erase(unordered_map2.begin(), unordered_map2.find("Kiswahili"));
    cout << "\nAfter erasing elements up to the one with key = \"Kiswahili\" "<<endl;
    showunordered_map(unordered_map2);
    cout << "\nRemove all elements with key = \"Electricity\" "<< endl;
    unordered_map2.erase("Electricity");
    showunordered_map(unordered_map2);
    return 0;
}