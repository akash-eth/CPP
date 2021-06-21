#include<iostream>
using namespace std;

void swap(int num1, int num2) {
    cout << "Value of num1 " << num1 << endl;
    cout << "Value of num2 " << num2 << endl;

    cout << "After SWAP" << endl;
    
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;


    cout << "Value of num1 " << num1 << endl;
    cout << "Value of num2 " << num2 << endl;

    return;

}

int main() {

    int num1, num2;
    cin >> num1 >> num2;

    swap(num1, num2);
    
    return 0;
}