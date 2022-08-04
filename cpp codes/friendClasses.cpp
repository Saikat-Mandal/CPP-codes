#include <iostream>
using namespace std;

class complex; // forward declaration

class calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }

    int sumComplex(complex o1, complex o2);
    int sumbComplex(complex o1, complex o2); // just declaring here and implementing outside
};

class complex
{
    int a, b;

public:

//individual access
    // friend int calculator ::sumComplex(complex o1, complex o2);
    // friend int calculator ::sumbComplex(complex o1, complex o2);

    // else make class the friend
    friend class calculator;
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print()
    {
        cout << a << "+i " << b << endl;
    }
};

int calculator ::sumComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumbComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setNumber(1, 2);
    c2.setNumber(3, 4);

    calculator c;
    int res = c.sumComplex(c1, c2);
    cout << res;
    return 0;
}