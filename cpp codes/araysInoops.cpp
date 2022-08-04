#include <iostream>
using namespace std;

class shop
{
    int itemPrice[100];
    int itemId[100];
    int count;

public:
    void initCount(void)
    {
        count = 0;
    }
    void setprice(void);
    void displayPrice(void);
};

void shop ::setprice()
{
    cout << "enter the item id: " << endl;
    cin >> itemId[count];
    cout << "enter the item price: " << endl;
    cin >> itemPrice[count];
    count++;
}

void shop ::displayPrice()
{
    for (int i = 0; i < count; i++)
    {
        cout << "the price od item Id : " << itemId[i] << " is " << itemPrice[i];
    }
}

int main()
{
    shop mandal;
    mandal.initCount();
    mandal.setprice();
    mandal.setprice();
    mandal.setprice();
    mandal.displayPrice();

    return 0;
}