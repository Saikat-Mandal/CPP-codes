#include <iostream>
using namespace std;
// class derived : {visibility mode} cName1 , {visibility mode} cName1

class base1
{
protected:
    int base1int;

public:
    void setData(int b1)
    {
        base1int = b1;
    }

    void fun(){
        cout<<"i am having fun"<<endl;
    }
};

class base2
{
protected:
    int base2int;

public:
    void setData2(int b1)
    {
        base2int = b1;
    }
    
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base1 is: " << base1int << endl;
        cout << "the value of base2 is: " << base2int << endl;
    }
};

int main()
{

    derived a;
    a.setData(1);
    a.setData2(3);

    a.show();
    return 0;
}