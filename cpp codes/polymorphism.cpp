#include <iostream>
using namespace std;

// polymorphism -> poly = many , morphism = forms

class base
{
public:
    int var1;
    void diplay()
    {
        cout << "var1 is : " << var1 << endl;
    }
};

class derived : public base
{
public:
    int var2;
    void diplay()
    {
        cout << "var1 is : " << var1 << endl;
        cout << "var2 is : " << var2 << endl;
    }
};
int main()
{
    base *basePtr;
    base objBase;
    derived objderived;


    // basePtr = &objderived; // if base class pointer is pointed to derived class pointer then base class functions are called ans this is called late binding
    // basePtr->var1 = 34;
    // basePtr->var2 = 134; // cannot take derive class properties as pointer is of base class
    // basePtr->diplay();

    derived *derivedPtr;
    derivedPtr = &objderived;
    derivedPtr->var1 =34;
    derivedPtr->diplay();


    return 0;
}