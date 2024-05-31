#include<iostream> 
using namespace std;
int main () {
    int arr1[6],arr2[4],arr3[10];
    for(int i = 0;i<6;++i){
        cin>>arr1[i];
        arr3[i] = arr1[i];
    }
    for(int i = 0;i<4;++i){
        cin>>arr2[i];
        arr3[6+i] = arr2[i];
    }
    for(int i = 9;i>=0;--i){
        cout<<arr3[i]<<" ";
    }
}