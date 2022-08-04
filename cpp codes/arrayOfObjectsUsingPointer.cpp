#include <iostream>
using namespace std;
class Shop
{
    int id;
    int price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3;
    Shop *ptr = new Shop[size]; // 3 shop objects are dynamically allocated in memory and the address of the first shop object is stored in ptr , u can increement this using pointer
    int p , q;
    Shop* ptrTemp = ptr;
    for(int i = 0; i<size ;i++){
        cout<<"enter the id and price of the item"<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }

    for(int i = 0 ;i<size ; i++){
        cout<<"item no."<<i+1;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}