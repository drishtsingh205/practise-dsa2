#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,7,5,4,4};
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(arr[i]+arr[j]==8){
                cout<<i<<j<<endl;
            }
        }
    }
    return 0;
}