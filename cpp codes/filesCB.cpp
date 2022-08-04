#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    //writing in a file
    fstream f;
       //if you use out put mode then it will just override the earlier written things in the
    f.open("mandal.txt", ios::out); // writing mode
    if (f.is_open())
    {
        f << "saikat\n";
        f << "mandal\n";
        f.close();
    // }    
    //so use append to insert new things to the data base
    f.open("mandal.txt", ios::app); // writing mode
    if (f.is_open())
    {
        f << "saikat 2\n";
        f.close();
    }


// reading in a file

f.open("mandal.txt" , ios::in);
if(f.is_open()){ //using while loop to access every single line of code
   string line;
   while (getline(f ,line))
   {
    cout<<line<<endl;
   }
   f.close();
}
    return 0;
}