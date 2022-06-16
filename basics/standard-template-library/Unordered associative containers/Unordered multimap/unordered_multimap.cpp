/*
* Generally like the unordered map. However, it can store duplicate keys
* 
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int showunordered_multimap(unordered_multimap<const char*, int> &unordered_multimap_){
    if (!unordered_multimap_.empty()){
        for (unordered_multimap<const char*, int>::iterator it = unordered_multimap_.begin(); it != unordered_multimap_.end(); it++){
            cout << "\nKey\t" << it->first << "\tValue\t" << it->second<<endl;
        }
    }else{
        cout << "\n The unordered_multimap is empty " << endl;
    }
    return unordered_multimap_.size();
}

int main(){

    unordered_multimap<const char*, int> unordered_multimap_, unordered_multimap2;
    unordered_multimap_.insert(pair<const char*, int>("Maths", 100));
    unordered_multimap_.insert(pair<const char*, int>("English", 88));
    unordered_multimap_.insert(pair<const char*, int>("Kiswahili", 90));
    unordered_multimap_.insert(pair<const char*, int>("Electricity", 70));
    unordered_multimap_.insert(pair<const char*, int>("Electricity", 100));
    showunordered_multimap(unordered_multimap_);
    cout <<"\n The size of the unordered map is "<< unordered_multimap_.size() <<endl;
    cout << "\nInitialize elements of one unordered_multimap with another: "<< endl;
    unordered_multimap2.insert(unordered_multimap_.begin(), unordered_multimap_.end());
    showunordered_multimap(unordered_multimap2);
    //changing an element using find:
    cout << "\nFind English-> " << unordered_multimap_.find("English")->second << endl;
    //change English to 600:
    if (unordered_multimap_.find("English") != unordered_multimap_.end()){
            unordered_multimap_.find("English")->second = 600;
    } else{
        cout <<"\nNot found" << endl;
    }
    
    cout << "\nFinding English again->"<< unordered_multimap_.find("English")->second <<endl;    
    //erase all elements less than key = "English"
    unordered_multimap2.erase(unordered_multimap2.begin(), unordered_multimap2.find("Kiswahili"));
    cout << "\nAfter erasing elements up to the one with key = \"Kiswahili\" "<<endl;
    showunordered_multimap(unordered_multimap2);
    cout << "\nRemove all elements with key = \"Electricity\" "<< endl;
    unordered_multimap2.erase("Electricity");
    showunordered_multimap(unordered_multimap2);

    //another method of initializing multimaps:
    cout <<"\nAnother initialization method:" << endl;
    unordered_multimap<const char*, int> um{{"Oranges", 10}, {"Mangoes", 50}, {"Peas", 700}};
    showunordered_multimap(um);

    return 0;
}