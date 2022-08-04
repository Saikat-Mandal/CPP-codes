#include <iostream>
using namespace std;

class A
{

public:
    int a, b;
    int add()
    {
        return a + b;
    }

    void operator+(A &obj)
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << val1 - val2;
    }

    void operator-(A obj)
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << val1 - val2;
    }
};
int main()
{
    A obj1, obj2;
    obj1.a = 7;
    obj2.a = 4;

    obj1 + obj2;
    return 0;
}
