#include<iostream>
    using namespace std;

class employee{
    int id, salary;
    public: 
        void setId(){
            salary = 122;
            cout<<"the value of id : "<<endl;
            cin>>id;
        }
        void getId(){
            cout<<"id is : "<<id<<endl;
        }
};
int main()
{
    // employee s , r,h;
    employee fb[4];
    // for(int i = 0 ; i<4;i++){
    //     fb[i].setId();
    //     fb[i].getId();
    // }

    cout<<sizeof(fb);

    return 0;
}