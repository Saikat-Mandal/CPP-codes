#include <iostream>
using namespace std;
// static variable value is always zero
//static variable is also called a class varible
//it is a class property thus shared by all the object of the class
//static functions is able to run with the name class from main
class employee
{
    int id;
    static int count;

    public:
    void setId();
    void getId();
    static void printCount(){
        cout<<count;

    }
};

void employee:: setId(){
    cout<<"enter the value of id :"<<endl;
    cin>>id;
     
    count++;
}
void employee:: getId(){
    cout<<"id is :"<<id<<"\nwhose count is: "<<count;
    cout<<endl;
}

int employee :: count;


int main()
{
    employee saikat,harry,rohan;
    saikat.setId();
    saikat.getId();
    employee :: printCount();

    harry.setId();
    harry.getId();
    employee :: printCount();

    rohan.setId();
    rohan.getId();
    employee :: printCount();




    return 0;
}