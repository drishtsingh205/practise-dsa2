#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxprofit(vector<int>& arr){
    int cp=INT_MAX;
int profitmax=0;
    // int sp=INT_MIN;
    for(int i=0;i<arr.size();i++){
        
        cp=min(cp,arr[i]);
int profit= arr[i]-cp;
    profitmax= max(profit,profitmax);

    // if(sp<arr[i]){
    //     sp=arr[i];
    // }
}

    
    cout<<profitmax;

    return profitmax;

}




int main(){
    //array of prices on diff ith day
    //let price is in the lakh
    vector<int> arr={4,2,5,1,3,9,16};
    maxprofit(arr);
}