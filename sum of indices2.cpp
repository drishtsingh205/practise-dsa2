#include<iostream>
using namespace std;
int getindexoftargetsum(int arr[],int n,int targetsum){
    bool found =false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==targetsum){
                cout<<"index whose sum is equal to targetsum:"<<" "<<i<<j<<" ";
                 found =true;
            }

        }
    }
    if(!found){
        cout<<"no such index.";
    }
}





int main(){
    int arr[]={1,7,3,5,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
   int  targetsum=8;
    getindexoftargetsum(arr,n,targetsum);
   return 0;
}