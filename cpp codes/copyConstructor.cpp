#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 10;
    }

    number(int num)
    {
        a = num;
    }

    // number(number &obj1)  // copy constructor
    // {
    //     cout<<"copy constructor called";
    //     a = obj1.a;
    // }

    void display()
    {
        cout << "the number is: " << a << endl;
    }
};
int main()
{
    number a, b, c(44);
    a.display();
    b.display();
    c.display();

    // c1 should resemble exaactly as c then we use copy constructor
    number c1(c);
    c1.display();

    return 0;
}
