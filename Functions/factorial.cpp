#include<iostream>
using namespace std;


int fact(int num) {
    int fact=1;
    for(int i=1; i<=num; i++) {
        fact = fact*i;
    }
    return fact;
}


int main() {

    int n;
    cin >> n;

    cout << fact(n);

    return 0;
}