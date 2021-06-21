#include<iostream>
using namespace std;

void test(int age) {
    if(age >= 18) {
        cout << "Eligible to vote";
    }
    else {
        cout << "Not Eligible Yet";
    }
    return;
}

int main() {

    int age;
    cin >> age;

    test(age);

    return 0;
}