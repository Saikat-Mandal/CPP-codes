#include<iostream>
    using namespace std;
    //friend funtions are not part of the class , they are friends
    //not in scope of class thats why eobjects cannot call it
    //usually takes object as an input
    // can be declared either public or private
class complex
{
    int a, b;

public:
    friend complex newComplex(complex o1, complex o2); // friend funtion is now allowed to use the private members of the class
    void setNumber(int v1, int v2){
        a = v1;
        b = v2;
    }
    void printComplex(){
        cout<<"the complex no. is : "<<a<<" + i"<<b<<endl;
    }
};
complex newComplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a+o2.a) , (o1.b + o2.b));
    return o3;
}    
int main()
{
    complex c1, c2,sum;
    c1.setNumber(1,2);
    c1.printComplex();
    c2.setNumber(3,4);
    c2.printComplex();

    sum = newComplex(c1,c2);      
    sum.printComplex();
    return 0;
}