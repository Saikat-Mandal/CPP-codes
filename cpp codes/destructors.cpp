#include <iostream>
using namespace std;

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "count called for object number: " << count << endl;
    }

    ~num()
    {
        cout << "destructor called for object number" << count << endl;
        count--;
    }
};
int main()
{
    cout << "inside main" << endl;
    cout << "creating a object n1" << endl;

    num n1; // making a black for num n1
    {
        cout << "entering the block" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;
        cout << "exiting block"<<endl;
    }

    cout << "back to main" << endl;
    return 0;
}