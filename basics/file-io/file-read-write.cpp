#include <iostream>
#include <fstream>

/*

Both the istream and ostream objects provide member functions that enables us to position the file pointer to any location
these are seekg and seekp for istream and ostream respectively. the first is a long interger indicating the location in the file as a number of bytes and the 
second one is an optional seek direction:
eg. to position the file pointer to the nth byte of fileObject (assumes ios::beg)
fileObject.seekg( n );
* position n bytes forward in fileObject
fileObject.seekg( n, ios::cur );

* position n bytes back from end of fileObject
fileObject.seekg( n, ios::end );

* position at end of fileObject
fileObject.seekg( 0, ios::end );
*/
using namespace std;
int main(){

    char data[100];
    ofstream outputfile;
    outputfile.open("name.txt");
    cout << "Writing to the file:" << endl;
    cout<< "Enter your full names" << endl;
    cin.getline(data, 100);
    //write data to the file:
    outputfile << data << endl;
    cout << "Enter your age:" << endl;
    cin >> data;

    //this ignores the extra characters left out by the previous read statement:
    cin.ignore();

    //again write to the file:
     outputfile << data << endl;
    //close the opened file:
    outputfile.close();

    //open in read mode:
    ifstream infile;
    infile.open("name.txt");
    cout << "Reading from file" << endl;
    infile.getline(data, 100);

    //write data to the screen:
    cout << data <<endl;

    infile.getline(data, 100);

    cout << data << endl;

    //close the opened file:
    infile.close();
    return 0;
}