#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int i,j;
    for(i=num1; i< num2; i++) {
        for(j=2; j < i; j++) {
            if(i%j ==0 ){
                break;
            }
        }
        if(j==i) {
            cout << i << endl;
        }
    }

    return 0;
}
