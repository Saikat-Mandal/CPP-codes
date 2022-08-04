#include <iostream>
using namespace std;
class base
{
public:
    int var1 = 1;
    virtual void diplay()
    {
        cout << "1) var1 is : " << var1 << endl;
    }
};


class derived : public base
{
public:
    int var2 =2;
    void diplay()
    {
        cout << "2) var1 is : " << var1 << endl;
        cout << "3) var2 is : " << var2 << endl;
    }
};


int main()
{
    base *basePtr;
    base baseObj;
    derived derivedObj;
    basePtr = &derivedObj;

    basePtr->diplay();
    //to override the default behaviour in cpp for funtion polymorphism
    // to run the derived class display with help of base class pointer we need to make the base class display function virtual 


    return 0;
}