#include <iostream>
using namespace std;
class employee
{
public:
    int id;
    float salary;

    employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
     employee() {}
   
};

// now the derived class syntax :
// class derived : {type} parent{};
// default visibility mode is private
class programmer : public employee
{
public:
    programmer(int inpId)
    {
        id = inpId;
    }
     void display()
    {
        cout << "empId is : " << id << " with code : " << languageCode << endl;
    }
   
    int languageCode = 9;
};

int main()
{
    employee harry(1), rohan(2);
    // cout<<harry.id;
    // harry.display();
    // rohan.display();
    // rohan.salary;

    programmer a(3);
//    cout<< a.languageCode;
a.display();
a.id;
   
    return 0;
}