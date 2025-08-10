#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> &input, int target){
    //define serach space
    int lo =0;//start of the search space
    int hi= input.size() -1;//end of the search space
    while(lo<=hi){
        int mid =(lo+hi)/2;
        if(input[mid]==target)return mid;
        else if(input[mid]<target){
            //discard the left of tghe mid
            lo = mid +1;

        }
        else{
            hi =mid -1;
        }
    }
    return -1;
}



int main(){
vector<int> input{2,4,5,7,15,24,45,50};
int target =15;
cout<<binarysearch(input ,target)<<"\n";




  return 0;  
}