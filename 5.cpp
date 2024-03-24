#include<iostream>
using namespace std;
int main () {
    int x,y;
    cin>>x>>y;
    char ch;
    cin>>ch;
    switch(ch){
        case '+':
        cout<<"addtion :"<<x+y;
        break;
        case '-':
        cout<<"subtraction :"<<x-y;
        break;
        case '*':
        cout<<"multiplication :"<<x*y;
        break;
        case '/':
        cout<<"division :"<<x/y;
        break;
        default :
        cout<<"invalid";
    }
}