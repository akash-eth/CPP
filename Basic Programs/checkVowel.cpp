#include<iostream>
using namespace std;

int main() {

    char vowvel;
    cout << "Enter vowvel" << endl;
    cin >> vowvel;

    if(vowvel == 'a' || vowvel == 'e' || vowvel == 'i' || vowvel == 'o' || vowvel == 'u') {
        cout << "It is a vowvel";
    }
    else {
        cout << "It is a consonant";
    }

    return 0;
}