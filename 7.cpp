#include<iostream>
using namespace std;
int main () {
    int x;
    cout<<"enter size";
    cin>>x;
    int arr[x];
    for(int i = 0;i<x;++i){
        cin>>arr[i];
    }
    int i = 0,j = x-1;
    while(i<j){
        if(arr[i] >= 0  &&  arr[j] < 0){
            swap(arr[i++],arr[j--]);
        }
        if(arr[i] < 0)
        i++;
        if(arr[j]>=0)
        j--;
    }
    for(int i = 0;i<x;++i){
        cout<<arr[i];
    }
}