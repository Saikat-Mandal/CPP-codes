#include <iostream>
using namespace std;
template <class T>
class harry
{
public:
    T data;
    harry(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void harry<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "i am first func()" << a << endl;
}
template<class T>
void func(T a)
{
    cout << "i am templatised func()" << a << endl;
}
int main()
{
    // harry<float> h(2.5);
    // h.display();

    func('y');
    return 0;
}