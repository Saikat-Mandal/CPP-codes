#include <iostream>
#include <string>
#include <vector>
using namespace std;


vector<int> encode(string s){
  vector<int> v1;
  int m;
    for(int i = 0; i<s.length() ;i++){
        m = (int)s[i];
        v1.push_back(m);
    }
   return v1;
}

string decode(vector<int> v1){
    string s =" ";
    for(int i =0 ; i < v1.size() ;i++){
    s += v1[i];
 }
 return s;
}


int main()
{
    // char c1, c2, c3, c4, c5;
    // cin >> c1 >> c2 >> c3 >> c4 >> c5;

    // int as1 = int(c1);
    // int as2 = (int)(c2);
    // int as3 = (int)(c3);
    // int as4 = (int)(c4);
    // int as5 = (int)(c5);
    // cout << as1 << " " << as2 << " " << as3 << " " << as4 << " " << as5<<endl;

    // char cs1 = (char)as1;
    // char cs2 = (char)as2;
    // char cs3 = (char)as3;
    // char cs4 = (char)as4;
    // char cs5 = (char)as5;
    // cout << cs1 << " " << cs2 << " " << cs3 << " " << cs4 << " " << cs5;


    string s = "saikat is sexy";
    vector<int> v1 = encode(s);

 for(int i =0 ; i < v1.size() ;i++){
    cout<<v1[i];
 }
    cout<<endl;
    cout<<decode(v1);

}