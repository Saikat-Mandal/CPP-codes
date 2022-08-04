#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:

    void setNumber(int v1, int v2){
        a = v1;
        b = v2;
    }

    void setComplex(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printComplex(){
        cout<<"the complex no. is : "<<a<<" + i"<<b<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setNumber(1,2);
    c2.setNumber(3,4);


    c3.setComplex(c1,c2);
    c3.printComplex();
    return 0;
}