#include<iostream>
    using namespace std;
class student{
    protected : 
    int roll_number;
    public:
    void set_rollNumber(int r){
        roll_number = r;
    } 
    void display_rollNumber(){
        cout<<"roll number is : "<<roll_number<<endl;
    }
}; 

class exam : public student{
    protected:
    float maths;
    float physics;

    public:
        void set_marks(float m, float p){
            maths = m;
            physics = p;
        }

        void display_marks(){
            cout<<"maths : "<<maths<<" physics : "<<physics<<endl;
        }   
} ;  


class result : public exam{
    float percentage;
    public:
    void display(){
        display_rollNumber();
        display_marks();
        cout<<"the percenatge is : "<<(maths + physics)/2<<"%"<<endl;
    }
};
int main()
{
    result a;
    a.set_rollNumber(1);
    a.set_marks(66.0,77.0);
    a.display();
    return 0;
}