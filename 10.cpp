#include<iostream>
using namespace std;
int main () {
    string str;
    getline(cin,str);
    int dgcnt = 0,alphcnt = 0,spccnt = 0,n = str.size();
    for(int i = 0;i<n;++i){
        if((str[i] >= 65  &&  str[i]<=90) ||  ((str[i] >=97  && str[i] <=122)))
        alphcnt++;
        else if(str[i] <= 48  &&  str[i] >= 57)
        dgcnt++;
        else spccnt++;
    }
    cout<<"special char: "<<spccnt<<"digit: "<<dgcnt<<"alphabet: "<<alphcnt;

}