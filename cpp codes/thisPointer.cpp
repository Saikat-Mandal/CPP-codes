#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // void setData(int a)
    // {
    //     this->a = a;
    // }
    A& setData(int a)
    {
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "the value of a : " << a;
    }
};
int main()
{
    // this is a keyword which is a pointer which points to the object which ivokes the member function
    A a1;
    a1.setData(4).getData();
    // a1.getData();
    return 0;
}