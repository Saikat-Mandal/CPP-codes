//easy example

// class Y;
// class X
// {
//     int data;

// public:
//     friend void add(X, Y);
//     void setNumber(int val)
//     {
//         data = val;
//     }
// };

// class Y
// {
//     int num;

// public:
//     friend void add(X, Y);
//     void setNumber(int val)
//     {
//         num = val;
//     }
// };

// void add(X o1, Y o2)
// {
//     cout << "adding the numbers: " << o1.data + o2.num << endl;
// }
// int main()
// {

//     X a;
//     Y b;
//     a.setNumber(1);
//     b.setNumber(2);

//     add(a,b);
//     return 0;
// }

// complex example 

#include<iostream>
    using namespace std;


class c2;
class c1{
int val;
public:
friend void swap(c1 &x , c2 &y);
    void setNumber(int a){
        val = a;
    }
    void printNumber(){
        cout<<val<<endl;
    }
}; 

class c2{
int val2;
public:
friend void swap(c1 &x , c2 &y);
    void setNumber(int a){
        val2 = a;
    }
    void printNumber(){
        cout<<val2<<endl;
    }
};   


void swap(c1 &x,c2 &y){
    int temp = x.val;
    x.val = y.val2;
    y.val2 = temp;
}


int main()
{
    c1 a;
    c2 b;
    a.setNumber(1);
    b.setNumber(2);

    swap(a,b);
    

   a.printNumber();
   b.printNumber();
    return 0;
}