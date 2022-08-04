#include <iostream>
using namespace std;

class base1
{
    int data;

public:
    base1(int i)
    {
        data = i;
        cout << "base const is called" << endl;
    }

    void getBase1()
    {
        cout << data << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base1 const is called" << endl;
    }

    void getBase2()
    {
        cout << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int deri1, der2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b) //similar t super keyword in java
    {
        deri1 = c;
        der2 = d;
        cout << "derived const is called" << endl;
    }
    void display()
    {
        cout << deri1 << " " << der2 << endl;
    }
};
int main()
{

    derived d(1,2,3,4);
    d.display();
    return 0;
}