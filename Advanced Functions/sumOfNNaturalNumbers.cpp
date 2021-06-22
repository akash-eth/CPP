#include<iostream>
using namespace std;

int sum(int num) {
    int naturalSum = num*(num+1)/2;
    return naturalSum;
}

int main() {

    int n;
    cin >> n;
    cout << sum(n);

    return 0;
}