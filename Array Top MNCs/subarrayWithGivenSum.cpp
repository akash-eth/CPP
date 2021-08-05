#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int s;
    cout << "enter desized sum" << endl;
    cin >> s;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int i=0;
    int j=0;
    int st = -1;
    int en = -1;
    int sum=0;

    while(j<n && sum+arr[j] >= s) {
        sum += arr[j];
        j++;
    }

    if(sum == s) {
        cout << i+1; // for getting 1_base indexing
        cout << j+1; // for getting 1_base indexing
        return 0;
    }

    while(j<n) {
        sum += arr[j];
        while(sum > s) {
            sum -= arr[i];
            i++;
        }
        if(sum == s) {
            st = i+1;
            en = j+1;
        }
        j++;
    }

    cout << st << " " << en;
    
    return 0;
}