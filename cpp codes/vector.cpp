#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    display(v1);
    cout << endl;
    vector<int>::iterator i = v1.begin();
    v1.insert(i + 1, 5, 4);
    display(v1);
    cout<<endl;
    cout<<v1.at(7);

    return 0;
}