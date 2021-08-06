#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i]>=0) {
            currSum += arr[i];
        }
        else {
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }

    cout << maxSum;

    return 0;
}