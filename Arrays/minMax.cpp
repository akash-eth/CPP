#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int array[n];
    for(int i=0; i<n; i++) {
        cin >> array[i];
    }

    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    for(int i=0; i<n; i++) {
        if(array[i] > maxNo) {
            maxNo = array[i];
        }
        if(array[i] < minNo) {
            minNo = array[i];
        }
    }

    cout << minNo << " " << maxNo << endl;
    
    return 0;
}