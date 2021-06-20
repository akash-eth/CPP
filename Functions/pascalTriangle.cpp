#include<iostream>
using namespace std;

int pascal(int num) {
    int coef = 1;
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=num-i; j++) {
            cout << " ";
        }
        
        for(int j=1; j<=i; j++) {
            if(j==1 || j==i) {
                cout << coef;
            }
            else {
                coef = coef * (i-j)/j;
            }
            cout << coef << " ";
        }
        cout << endl;
    }
}

int main() {

    int n;
    cin >> n;

    int answer = pascal(n);
    cout << answer;

    return 0;
}