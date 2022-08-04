#include <iostream>
using namespace std;

template < class t1 , class t2>
class myClass
{
public:
    t1 data1;
    t2 data2;

    void display()
    {
        cout << this->data1<<endl;
        cout<< this->data2;
    }
};
int main()
{
    myClass <int , char> a;
    a.data1 = 1;
    a.data2 = '4';
    a.display();
    return 0;
}