#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    for(int i=1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp; // as after comming out from while loop, j will always be -1, so to make it place on the coreect me j+1;
    }

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}