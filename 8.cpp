#include<iostream>
#include<vector>
using namespace std;
int main () {
    string str;
    getline(cin,str);
    int n = str.size(),vow = 0,cons = 0;
    for(int i = 0;i<n;++i){
        if(str[i] == 'a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'|| str[i]=='O'|| str[i]=='U')
        vow++;
        else cons++;
    }
    cout<<"the no of vowel is "<<vow<<" and consonant is "<<cons;
}