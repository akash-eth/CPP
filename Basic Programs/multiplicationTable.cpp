#include<iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a number whose Mul table you require" << endl;
    cin >> num;
    cout << "-------------------" << endl;

    int mul;
    for(int i=1; i<=10; i++) {
        mul = num*i;
        cout << num << "*" << i << "=" << mul << endl;
    }
    return 0;
}