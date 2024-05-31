#include<iostream> 
using namespace std;
int main () {
    int arr[6] = {3,7,8,3,7,7};
    int x = 7,cnt = 0;
    for(int i = 0;i<6;++i){
        if(arr[i] == x)
        cnt++;
    }
    cout<<"occurances of "<<x<<"in array is"<<cnt;
}