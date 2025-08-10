#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxsubarr(vector<int>& arr){
 int sum=arr[0];
int currentsum=arr[0];
for(int i=1;i<arr.size();i++){
    currentsum =max(arr[i] , arr[i]+currentsum);
     sum=max(sum,currentsum);
}
return sum;
}




int main(){

vector<int> arr={3,6,-2,5,-4,-1,6};


cout<<"max sum"<<maxsubarr(arr)<<endl;



}