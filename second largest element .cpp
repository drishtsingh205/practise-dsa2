// #include<iostream>
// #include<climits>
// using namespace std;

// int main() {
//     int arr[5] = {13, 23, 15, 67, 24};

//     int firstMax = INT_MIN;
//     int secondMax = INT_MIN;

//     for(int i = 0; i < 5; i++) {
//         if(arr[i] > firstMax) {
//             secondMax = firstMax;
//             firstMax = arr[i];
//         } else if(arr[i] > secondMax && arr[i] != firstMax) {
//             secondMax = arr[i];
//         }
//     }

//     if(secondMax == INT_MIN) {
//         cout << "There is no second maximum element." << endl;
//     } else {
//         cout << "Second maximum is: " << secondMax << endl;
//     }

//     return 0;
// }




#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5]={23,12,13,25,24};
    int mx = INT_MIN;
    int max_idx =-1;
    for(int i=0;i<5;i++){
        if (arr[i]>mx){
            mx = arr[i];
            max_idx =i;
        }
    }
    cout<<mx;
    cout<<endl;

arr[max_idx]= -1;
int secmx=INT_MIN;

    for(int i=0;i<5;i++){
        if (arr[i]>secmx){
                secmx = arr[i];}




}
cout<<secmx;

}






