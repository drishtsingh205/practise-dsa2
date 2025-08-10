#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxsubarr(vector<int>& arr){
 int sum=arr[0];
int currentsum=arr[0];
int start =0,end=0,tempstart=0;
for(int i=1;i<arr.size();i++){
    if(arr[i]>arr[i]+currentsum){
        currentsum =arr[i];
        tempstart=i;

    }else{
        currentsum+=arr[i];
    }
    if(currentsum>sum){
        sum =currentsum;
        start =tempstart;
        end =i;
    }
    
}

for(int i=start;i<=end;i++){
    cout<<arr[i]<<endl;
}
return sum;
}




int main(){

vector<int> arr={3,6,-2,8,-4,-1,6};


cout<<"max sum"<<maxsubarr(arr)<<endl;



}