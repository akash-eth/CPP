#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int currSum[n+1];
    currSum[0] = 0;
    for(int i=1; i<=n; i++) {
        currSum[i] = currSum[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;
    for(int i=1; i<=n; i++) {
        int localSum=0;
        for(int j=0; j<i; j++) {
            localSum = currSum[i] - currSum[j];
            maxSum = max(maxSum, localSum);
        }
    }

    cout << maxSum;

    return 0;
}