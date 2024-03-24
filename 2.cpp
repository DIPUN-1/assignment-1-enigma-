#include<iostream>
using namespace std;
int main () {
    for(int i = 1;i<=100;i++){
        if(i%3 == 0)
        cout<<"Fizz"<<endl;
        if(i%5 == 0)
        cout<<"Buzz"<<endl;
        if(i%3 != 0  &&  i%5 != 0)
        cout<<i<<endl;
    }


    return 0;
}