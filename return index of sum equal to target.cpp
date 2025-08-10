
#include<iostream>
#include<utility>
using namespace std;
  pair <int ,int> targetindex(int arr[], int n, int targetsum){
         for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
        if((arr[i]+arr[j])==targetsum){
         return{i,j};

        }
         
       
        
    }
    }
    
        return {-1,-1};
}
        
int main(){
    
    int arr[]={1,7,6,9,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int  targetsum =8;
        pair<int ,int> indices = targetindex(arr , 6,targetsum);
  
       if (indices.first != -1) {
        cout << "Indices: " << indices.first << ", " << indices.second << endl;
    } else {
        cout << "No such pair found." << endl;
    }

    return 0;
}