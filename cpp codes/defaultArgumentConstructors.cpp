#include <iostream>
// using namespace std;
class simple
{
    int data1, data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    void printNumber(){
      std::cout<<data1<<" "<<data2<<std :: endl;
    }
};
int main()
{
    simple o1 = simple(1,8);
    o1.printNumber();
    return 0;
}
