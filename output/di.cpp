#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,2,2,2,5,2};
    int k=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<k;i++){
          int count =0;
        for(int j=0;j<k;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
            if(count>k/2){
                cout<<arr[i];
                break;
            }
        
    }
    return 0;
}