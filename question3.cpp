#include<iostream>
#include<vector>

using namespace std;
int peakMountainArray(vector<int> &input){
    int lo=1,hi=input.size() -1;
     
    while(lo<=hi){
         int mid =lo+(hi-lo)/2;
        
        if(input[mid +1]>input[mid]){
            //inc curve

            lo= mid+1;
            
        }else{
            hi=mid-1;
        }
    }
    return lo;
}





int main(){


    vector<int> input ;
    int n;
    cin>>n;

for(int i=0;i<n;i++){
       int x;
        cin >> x;
        input.push_back(x);
}

    // while(n--){
    //     int x;
    //     cin>>x;
    //     input.push_back(x);
    
    cout<<peakMountainArray(input)<<"\n";
    









    return 0;
}
