#include <iostream>
using namespace std;
class printer
{
    string name;
    int availablePaper;

public:
    printer(string pname, int paper) : name(pname)
    {
        availablePaper = paper;
    }

    void display(string text)
    {
        int requiredPaper  = text.length() / 10;
        if(requiredPaper > availablePaper){
            // throw " no paper";
            throw 101;
        }
        cout << "printing : " << text << endl;
      availablePaper -= requiredPaper;
    }
};
int main()
{
    // printer p("hp" , 12);
    printer p = printer("hp", 12);
 try
 {
    p.display("my name is saikat,my name is saika , my name is saika , my name is saika ,my name is saika");
    p.display("astala veests dnasndkbasdfbadsbflksadnvkasvlknakvkasvkavkbsaldbvadnlkankakjglkajg");
   
 }
catch(...)
 {
    cout<<"exception occurred" ;   // default handler
 }
 
//  catch(const char* tException)
//  {
//     cout<<"exception: " << tException<<endl;     // char handler
//  } 
 catch(int tException)
 {
    cout<<"exception: " << tException<<endl;    // int handler
 }
  
   
    
    return 0;
}