#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
// funtion objects (functors) function wrapped in a class so that
//  it available like an object
int main()
{
    int arr[] = {1,73,4,12,22,7};
    sort(arr, arr+6); // sorts in ascending order
    sort(arr, arr+6 , greater<int>()); // sorts in descending order

    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}