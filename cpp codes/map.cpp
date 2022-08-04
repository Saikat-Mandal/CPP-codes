#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    map<string, int> marksMap;
    marksMap["saikat"] = 98;
    marksMap["kadam"] = 67;
    marksMap["mohan"] = 69;

    marksMap.insert({{"aksh" , 99} , {"baghla" , 89}});
    map<string, int>::iterator i;
    for (i = marksMap.begin(); i != marksMap.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }

    return 0;
}