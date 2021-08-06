#include<iostream>
using namespace std;

int kadane(int arr[], int n) {
    int currSum=0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        if(arr[i]>=0) {
            currSum += arr[i];
        }
        else{
            currSum = 0;
        }
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int nonWrapSum= kadane(arr, n);
    int wrapSum=0;
    int totalArraySum = 0;
    for(int i=0; i<n; i++) {
        totalArraySum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalArraySum + kadane(arr, n); // totalArraySum - (-kadane(arr, n)) // -ve + -ve = +ve;

    cout << max(nonWrapSum, wrapSum) << endl;
    return 0;
}