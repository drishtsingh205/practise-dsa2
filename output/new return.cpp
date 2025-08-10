#include<iostream>
using namespace std;

int findmajorityelement(int arr[], int n) {
   
    int candidate = arr[0];
    int count = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }

        if(count == 0) {
            candidate = arr[i];
            count = 1;
        }
    }

    
    count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == candidate) {
            count++;
        }
    }

    if(count > (n / 2)) {
        return candidate;
    } else {
        return -1; 
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int element = findmajorityelement(arr, n);
    if(element != -1)
        cout << "Majority element is: " << element << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}
