#include <iostream>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1 , int b1, int c1);
    void getData(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }
};
void employee :: setData(int a1 , int b1 , int c1){
    a = a1;
    c = c1;
    b = b1;
}


int main()
{   employee saikat;
saikat.d = 2;
saikat.e = 3;
saikat.setData(1,4,5);
saikat.getData();


    return 0;
}