#include<iostream>
using namespace std;

void check(int num) {
    if(num%2 == 0) {
        cout << "even";
    }
    else {
        cout << "odd";
    }
    return;
}

int main() {

    int n;
    cin >> n;

    check(n);

    return 0;
}