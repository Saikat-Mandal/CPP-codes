#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void setRoll(int r)
    {
        roll = r;
    }

    void print()
    {
        cout << "roll no is : " << roll << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setMarksI(int m, int p)
    {
        maths = m;
        physics = p;
    }

    void displayMarks()
    {
        cout << "maths: " << maths << " physics : " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setScore(int s)
    {
        score = s;
    }

    void displayScore()
    {
        cout << "score is : " << score << endl;
    }
};


class result : public test , public sports{
float total;
public:
    void display(){
        total = maths + physics + score;
        print();
        displayMarks();
        displayScore();
        cout<<"the total score is: "<<total<<endl;
    }

};
int main()
{
    result saikat ;
    saikat.setRoll(1);
    saikat.setMarksI(100,100);
    saikat.setScore(100);
    saikat.display();
    return 0;
}