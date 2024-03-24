#include<iostream>
using namespace std;
int main () {
    int x,sum = 0;
    cin>>x;
    do{
        sum += x%10;
        x /= 10;
    }while(x>0);
    cout<<sum;
    return 0;
}