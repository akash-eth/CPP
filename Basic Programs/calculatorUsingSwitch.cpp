#include<iostream>
using namespace std;

int main() {

    int num1, num2;
    cin >> num1 >> num2;

    char operation;
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << num1 + num2;
        break;
    
    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;
    
    case '/':
        cout << num1/num2;
        break;
    default:
        cout << "Operation Failed !!";
        break;
    }

    return 0;
}