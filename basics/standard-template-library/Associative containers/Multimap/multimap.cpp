/*
* Similar to a map only that multiple elements can have the same keys.
* The key value also doesn't have to be unique
* Always keeps the keys in sorted order always, a feature that makes them useful in competitive programming
*/
#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int showmultimap(multimap<const char*, int> &multimap_){
    if (!multimap_.empty()){
        for (multimap<const char*, int>::iterator it = multimap_.begin(); it != multimap_.end(); it++){
            cout << "\nKey\t" << it->first << "\tValue\t" << it->second<<endl;
        }
    }else{
        cout << "\n The multimap is empty " << endl;
    }
    return multimap_.size();
}

int main(){

    multimap<const char*, int> multimap_, multimap2;
    multimap_.insert(pair<const char*, int>("Maths", 100));
    multimap_.insert(pair<const char*, int>("Maths", 180));
    multimap_.insert(pair<const char*, int>("Kiswahili", 90));
    multimap_.insert(pair<const char*, int>("Electricity", 70));
    showmultimap(multimap_);
    cout << "\nInitialize elements of one multimap with another: "<< endl;
    multimap2.insert(multimap_.begin(), multimap_.end());
    showmultimap(multimap2);

    //erase all elements less than key = "English"
    multimap2.erase(multimap2.begin(), multimap2.find("Kiswahili"));
    cout << "\nAfter erasing elements up to the one with key = \"Kiswahili\" "<<endl;
    showmultimap(multimap2);
    cout << "\nRemove all elements with key = \"Electricity\" "<< endl;
    multimap2.erase("Electricity");
    showmultimap(multimap2);

    //lower and uppper bound for key = "Kiswahili";
    cout <<"\nLower bound(\"Kiswahili\") "<< multimap_.lower_bound("Kiswahili")->second << "\tUpper bound(\"Kiswahili\") " << multimap_.lower_bound("Kiswahili")->second<<endl;
    return 0;
}