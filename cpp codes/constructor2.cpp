#include <iostream>
// using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a =x;
        b= y;
        
    }

    void printNumber()
    {
        std::cout << a << "+ i " << b;
    }
};
int main()
{
    complex c(1,2); //implicit calls
    c.printNumber();

    complex b = complex(4,3); // explicit calls
    b.printNumber();
    return 0;
}