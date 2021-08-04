#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans=2; // mininum answer will be 2
    int pd = arr[1] - arr[0];
    int j=2; // as 0th and 1st element are already taken by pd
    int curr = 2; // curr is the min streak

    while(j<n) {
        if(pd == (arr[j] - arr[j-1])) {
            curr++; // increase the streak !!
        }
        else {
            pd = arr[j] - arr[j-1];
            curr = 2; // as streak breaks down, set curr back to 2
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans;

    return 0;
}