
#include<iostream>

using namespace std;
int main(){
    int arr[6]={12,23,86,21,45,9};
    int n=6;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;

}