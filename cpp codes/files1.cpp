#include <iostream>
#include <fstream>

// useful classes for working with files in cpp
// 1) fstream --> base class
// 2) ifstream -->derived from base (read)
// 3) ofstream -->derived from base (write)

// to work with files in cpp , you have to open it. primarily, there are 2 ways to open a file
// 1) using constructor
// 2)using member function open();

using namespace std;
int main()
{ // opening with constructor and writing to it

    string s = "saikat mandal yo bro";
    ofstream out("sample.txt");
    out << s;
    
    // opening with constructor and reading it 
    string st2;
    ifstream in("sample2.txt");
    // in >> st2; // this will give only first letter not the whole line

    getline(in,st2); // do this to get the whole line
    cout<<st2;

    
    return 0;
}