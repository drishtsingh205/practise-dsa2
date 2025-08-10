#include<iostream>
using namespace std;
int findmajorityelement(int arr[],int n){
    int candidates=arr[0];
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==candidates){
            count++;
        }
    }
        if(count > (n/2)){
            return candidates;
        }
        else{
            return -1;
        } 
  
}




int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int element= findmajorityelement(arr,n);
    cout<<element<<"  ";
    return 0;
    
}

// #include<iostream>
// using namespace std;
// int findmajorityelement(int arr[],int n){
//     int count=1;
//     for(int i=0;i<n;i++){
//           int candidates=arr[i];
//           for(int j=0;j<n;j++){
//         if(arr[j]==candidates){
//             count++;
//         }
//     }
    
//         if(count >(n/2)){
//             return candidates;
//         }
//         else{
//             return -1;
//         } 
  
// }
// }




// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//      cin>>arr[i];
//     }
//     int element= findmajorityelement(arr,n);
//     cout<<element<<"  ";
//     return 0;
    
// }