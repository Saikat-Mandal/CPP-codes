#include <iostream>
using namespace std;
class base
{
protected: // private but can be derived
    int a = 10;

private:
    int b =11;

    public:
     
};

//                         Public Derivation      	Private Derivation    	Protected Derivation
// Private members          Not Inherited            Not Inherited              Not Inherited
// Protected members        Protected                Private                      Protected
// Public members          Public	                    Private                    Protected

class derived : protected base
{
    public:
        void display(){
     
            cout<<a;
        }
};
int main()
{
    derived d;
    d.display();
    return 0;
}