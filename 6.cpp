#include<iostream> 
using namespace std;
int main () {
    int arr[8] = {1,5,7,2,10,24,17,21};
    int cnt_max = 0,x;
    for(int i = 0;i<8;++i){
        for(int j = 0;j<8;++j){
            int cnt = 0;
            if(arr[i] == arr[j])
            cnt++;
            if(cnt_max<cnt){
                cnt_max = cnt;
                x = i;
            }
        }
    }
    cout<<arr[x]<<"is the highest occuring element";
}