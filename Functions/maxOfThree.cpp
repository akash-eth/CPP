#include<iostream>
using namespace std;

void max(int num1, int num2, int num3) {
    if(num1 > num2) {
        if(num1 > num3) {
            cout << "num1 " << num1 << " is max";
        }
    }
    else if(num2 > num3) {
        cout << "num2 " << num2 << " is max";
    }
    else {
        cout << "num3 " << num3 << " is max";
    }
}

int main() {

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    max(num1, num2, num3);

    return 0;
}