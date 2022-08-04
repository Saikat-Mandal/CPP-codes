#include <iostream>
using namespace std;
class base
{

    int data1;

public:
    int data2;
    void setData()
    {
        data1 = 10;
        data2 = 20;
    }
    int getData1()
    {
        return data1;
    }
    int getData2();
};

int base ::getData2()
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    void process()
    {
        data3 = data2 * getData1();
    }
    void display()
    {
        cout << "data 1 is : " << getData1() << endl;
        cout << "data 2 is : " << data2 << endl;
        cout << "data 3 is : " << data3 << endl;
    }
};
int main()
{
    derived d;
    d.setData();
    d.process();
    d.display();
    return 0;
}