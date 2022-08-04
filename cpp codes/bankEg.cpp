#include <iostream>
using namespace std;

// Dynamic Initialization of Objects Using Constructors

class bankDeposit
{
    int principal;
    int years;
    float interest;
    float returnVal;

public:
    bankDeposit(){}; // necessary to make an empty constructor
    bankDeposit(int p, int y, float r)
    {
        principal = p;
        years = y;
        interest = r;
        returnVal = principal;
        for (int i = 0; i < y; i++)
        {
            returnVal *= (1 + r);
        }
    }
    bankDeposit(int p, int y, int r)
    {
        principal = p;
        years = y;
        interest = (float)r / 100;
        returnVal = principal;
        for (int i = 0; i < y; i++)
        {
            returnVal *= (1 + interest);
        }
    }

    void show()
    {
        cout << "The principal amount was : " << principal << endl;
        cout << "return value after " << years << " years" << endl;
        cout << "is: " << returnVal << endl;
    }
};
int main()
{
    bankDeposit bd1 , bd2;
    int p, y, R;
    float r;

    cout<<"enter the value of principal : "<<endl;
    cin>>p;
    cout<<"enter the value of years : "<<endl;
    cin>>y;
    cout<<"enter the value of rate : "<<endl;
    cin>>R;


    // bd1 = bankDeposit(p,y,r);

    // bd1.show();
  
     bd2 = bankDeposit(p,y,R);
    bd2.show();
    return 0;
}