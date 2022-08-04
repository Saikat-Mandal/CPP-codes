#include <iostream>
using namespace std;
class hero
{
    int health;

public:
    char level;
    hero()
    {
        cout << "simple constructor called";
    }

    hero(int health)
    {
        this->health = health;
    }
    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    void display()
    {
        cout<<health<<endl;
        cout << level << endl;
    }


    void setHealth(int h)
    {
        health = h;
    }
    void setlevel(char l)
    {
        level = l;
    }

    //making our own copy constructor
    hero(hero &temp){
        cout<<"copy constuctor called";
        this->health = temp.health;
        this->level =  temp.level;
    }
};
int main()
{
    hero saikat(20, 'a');


//whenever you write a class copy constructor is autpmatically generated
// when we write this below type of line our copy constructor is called 
    hero mandal(saikat);

    // ^
    // |
    // |

    // this line means mandal.health = saikat.health
    // and mandal.level = saikat.level
   
   mandal.display();
    return 0;
}