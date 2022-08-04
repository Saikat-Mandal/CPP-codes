#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void login();
void registration();
void forgot();

int main()
{

    int c;
    cout << "\t\t\t _________________________________________________________ \n\n\n";
    cout << "\t\t\t                   Welcome to the login page !             \n\n\n";
    cout << "\t\t\t_____________________        MENU     _________________________\n";

    cout << "\t| Press 1 to Login                       |" << endl;
    cout << "\t| Press 2 to Register                    |" << endl;
    cout << "\t| Press 3 if you forgot your password    |" << endl;
    cout << "\t| Press 4 to exit                        |" << endl;

    cout << "Please enter your choice...." << endl;
    cin >> c;
    cout << endl;

    switch (c)
    {
    case 1:
        login();
        break;

    case 2:
        registration();
        break;

    case 3:
        forgot();
        break;

    case 4:
        cout << "\t\t\t    Arigatou gosaimasu !!!    \n\n\n";
        break;

    default:
        system("cls"); // clears the screen after succesful execution of the program
        cout << "\t\t\t please select fromt he options given above  \n ";
        main();
    }
}

//login
void login()
{
    int count;
    string userId, password, id, pass;
    system("cls");

    cout << "\t\t\t Please enter the usename and password : " << endl;
    cout << "\t\t\t User Name : ";
    cin >> userId;
    cout << "\t\t\t Password : ";
    cin >> password;

    ifstream input("records.txt"); // ifstream is use to read the data

    while (input >> id >> pass)
    {
        if (id == userId && pass == password)
        {
            count == 1;
            system("cls");
        }
    }
    input.close();
    if (count == 1)
    {
        cout << userId << "\t Login successful !" << endl;
        main();
    }
    else
    {
        cout << "\t Error logging in , Please check your User Name and Password\n";
        main();
    }
}


//registration
void registration()
{
    string rUserId, rPassword,rid,rpass;
    system("cls");
    cout << "\t\t\t Enter the User Name : ";
    cin >> rUserId;
    cout << "\t\t\t Enter the Password : ";
    cin >> rPassword;

    ofstream f1("records.txt", ios::app); // ofstream is use to write the data
    f1 << rUserId << ' ' << rPassword << endl;
    system("cls");
    cout << "\t\t\t Registration successfull !" << endl;
    main();
}

//forgot
void forgot()
{

    int option;
    system("cls");
    cout << " Press 1 for changing youe password using User Name \n";
    cout << "Press 2 to go to the main menu \n";
    cout << "\t\t\t Please enter your choice : ";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        int count = 0;
        string SuserId, Spass, sId;

        cout << "\n\t\t Enter the username you remembered: ";
        cin >> SuserId;

        ifstream f2("records.txt");
        while (f2 >> sId >> Spass)
        {
            if (sId == SuserId)
            {
                count = 1;
            }
        }
        f2.close();
        if (count == 1)
        {
            cout << "\n\n your account is found !\n";
            cout << "your password is : " << Spass;
            main();
        }
        else
        {
            cout << "\n\t Sorry, Account not found ";
            main();
        }
        break;
    }

    case 2:
    {
        main();
        
    }
    default:

        cout << "\t\t\t Wrong choice , please choice please try again !" << endl;
        forgot();
    }
}