#include <iostream>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onesC(void);
    void display(void){
        cout<<s<<endl;
    }
};

void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' and s.at(i) != '0')
        {
            cout << "Incorrect binary format";
            exit(0);
        }
       
    }
    cout<<"correct format";
    
}
void binary :: onesC(void){
    chk_bin();
    for(int i = 0 ; i < s.length() ; i++){
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}
int main()
{

    binary b;
    b.read();
    // b.chk_bin();
    b.onesC();
    b.display();

    return 0;
}