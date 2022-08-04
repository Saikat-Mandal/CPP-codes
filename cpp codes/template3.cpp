#include <iostream>
using namespace std;

template < class t1 = int , class t2 = char>
class myClass
{
public:
    t1 data1;
    t2 data2;
    myClass( t1 x ,t2 y){
        data1 = x;
        data2 = y;
    }
    void display()
    {
        cout << this->data1<<endl;
        cout<< this->data2;
    }
};
int main()
{
    myClass <> a(4,'7');
    // a.data1 = 1;
    // a.data2 = '4';
    a.display();
    return 0;
}