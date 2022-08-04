#include<iostream>
#include<fstream>
    using namespace std;
int main()
{
    string s = "harry lawda";
    string m = "ssss";
    ofstream hout("sample.txt");
    hout<<s+ " hai bohot bada";
    hout<<m;

    hout.close();


    string h;
    ifstream my("sample.txt");
    getline(my , h);
    cout<<h;
    my.close();
    return 0;
}