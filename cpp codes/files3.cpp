#include<iostream>
#include<fstream>
#include<string>
    using namespace std;
int main()
{
    // no of times you use the object to write it will
    // go to the new line 
    ofstream out;
    string s = "Saikat mandal";
    string z =" 20bce10451";
    out.open("sample.txt");
    out<<s<<" this is me\n";
    out<<z<<" this is me\n";
  

    out.close();

    ifstream in;
    string m;
    in.open("sample.txt");
    // getline(in , m);
    // cout<<m;

    // in place of getline function we can use the while loop
    // to read a file
    while(in.eof() == 0){
        getline(in , m);
        cout<<m<<endl;
    }
    in.close();
  
    return 0;
}