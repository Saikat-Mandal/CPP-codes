#include<iostream>
    using namespace std;
    class vector{
        int * arr;
        int size;
        public:
            vector(int m){
                size = m;
                arr = new int[size];
            }

            int dotProduct(){
                int d = 0;
                for(int i =0 ;i<size ;i++){
                    d += this->arr[i] * arr[i];
                    return d;
                }
            }
    };
int main()
{
    return 0;
}