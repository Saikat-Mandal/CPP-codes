#include <iostream>
#include <list>
using namespace std;
class Ytchannel
{
public:
    string Name;
    int Subs;

    Ytchannel(string name, int subs)
    {
        Name = name;
        Subs = subs;
    }
};



ostream &operator<<(ostream &COUT, Ytchannel &obj)
{
    COUT << "name : " << obj.Name << endl;
    COUT << "subscriber count : " << obj.Subs;
    return COUT;
}
class myCollections
{
public:
    list<Ytchannel> mychannel;
    void operator+=(Ytchannel &obj1)
    {
        this->mychannel.push_back(obj1);
    }
};



int main()
{
    Ytchannel yt1 = Ytchannel("Saikat", 69);
    Ytchannel yt2 = Ytchannel("Saikat", 69);

    // cout << yt1; this is more common

    // using like regular function
    // operator<<(cout , yt1);

 

    return 0;
}