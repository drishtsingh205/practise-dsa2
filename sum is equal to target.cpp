
#include<iostream>
using namespace std;
int main(){
    int arr[6]={3,5,7,2,1,4};
    int  targetsum =8;
    int pairs =0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++)
        if((arr[i]+arr[j])==targetsum){
            pairs= pairs+1;
        }
    }
    cout<<pairs;
    
}