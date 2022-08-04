#include <iostream>
#include <math.h>
using namespace std;

// q1 simple calculator

class calculator
{
protected:
    int a, b;
    char op;

public:
    void setData()
    {
        cout << "enter the value first no. : " << endl;
        cin >> a;
        cout << "enter the value second no. : " << endl;
        cin >> b;
    }

    void display2()
    {
        setData();
        cout << "enter the operation to perform" << endl;

        cin >> op;
        switch (op)
        {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;

        default:
            cout << "invalid input";
            break;
        }
    }
};

class scientificCalculator
{
protected:
    int num;
    int x;

public:
    void setData2()
    {
        cout << "enter the value num : " << endl;
        cin >> num;
    }

    void display3()
    {
        setData2();
        cout << "enter 1 for sqrt , 2 for log , 3 for naturalLog and 4 for abs value " << endl;

        cin >> x;

        switch (x)
        {
        case 1:
            cout << sqrt(num) << endl;
            break;
        case 2:
            cout << log(num) << endl;
            break;
        case 3:
            cout << log10(num) << endl;
            break;
        case 4:
            cout << abs(num) << endl;
            break;

        default:
            break;
        }
    }
};

class HybridCalculator : public calculator, public scientificCalculator
{
    int t;

public:
    void display()
    {
        cout << "enter 1 for normal calci  and 2 for scientificCalci" << endl;
        cin >> t;
        if (t == 1)
        {
            display2();
        }
        else
        {

            display3();
        }
    }
};
int main()
{
    HybridCalculator h1;
    h1.display();

    return 0;
}
