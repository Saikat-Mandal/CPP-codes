#include <iostream>
#include <math.h>
// using namespace std;
class point
{
    int a, b;

public:
    friend int distance(point p1, point p2);
    point(int x, int y)
    {
        a = x;
        b = y;
    }

    void printNumber()
    {
        std::cout << "the cooridinates are : (" << a << "," << b << ")";
    }
};

int distance(point p1, point p2)
{
    return sqrt( pow((p1.a - p2.a), 2) + pow((p1.b - p2.b), 2));
}
int main()
{
    point c1 = point(0, 1);
    point c2 = point(0, 6);

    int sum = distance(c1, c2);
    std::cout << "the sum is: " << sum;
    return 0;
}