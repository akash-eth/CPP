#include<iostream>
using namespace std;

int main() {

    int num;
    cin>>num;

    int sum;
    while(num>=0) {
        sum += num;
        cin >> num;
    }
    cout << sum;
    

    return 0;
}