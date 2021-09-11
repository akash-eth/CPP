#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n+1];
    arr[n] = -1;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    if(n==1) {
        cout << "1" << endl;
    }

    
    int ans = 0;
    int mx = INT_MIN;
    for(int i=0; i<n; i++) {
        if(arr[i] > mx && arr[i] > arr[i+1]) {
            ans += 1;
        }
        mx = max(mx, arr[i]);
    }
    cout << ans;

    return 0;
}