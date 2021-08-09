#include<iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int key;
    cin >> key;

    int arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    bool flag = true;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j] == key) {
                cout << i << "" << j << endl;
                flag = true;
            }
        }
    }

    if(flag) {
        cout << "element found";
    }
    else {
        cout << "element not found";
    }

    return 0;
}