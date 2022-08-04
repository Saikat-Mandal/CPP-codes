#include <iostream>
// using namespace std;

class Complex
{
    int a, b;

public:
    Complex() // should be declared in the public section of the class
    {
        a = 10;
        b = 20;
    }
    void prinNumber()
    {
       std :: cout << a << "+ i " << b;
    }
};

int main()
{
    Complex c;
    c.prinNumber();
    return 0;
}