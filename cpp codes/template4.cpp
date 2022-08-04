#include <iostream>
using namespace std;

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class t1, class t2>
float avg(t1 a, t2 b)
{
    float c = (a + b) / 2.0;
    return c;
}
int main()
{
    // float a;
    // cout << avg(4.8, 6.8);

 float a = 3.6,b =5.9;
 swapp(a,b);
 cout<<"a : "<<a <<" b : "<<b;

    return 0;
}