#include<iostream>
using namespace std;
int main () {
    int i = 5;
    for(int x = 1;x<=5;++x){
        for(int y = 6-x;y>=1;--y)
        cout<<"*";
        cout<<endl;
    }
}