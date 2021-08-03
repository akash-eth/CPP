#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(key == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << linearSearch(arr, n, k);

    return 0;
}