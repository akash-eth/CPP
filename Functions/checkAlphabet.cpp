#include<iostream>
using namespace std;

void alpha(char word) {
    if (word >= 'a' && word <= 'z' || word >= 'A' && word <= 'Z') {
        cout << "is aplhabet";
    }
    else {
        cout << "not an alphabet";
    }
    return;
}

int main() {

    char word;
    cin >> word;

    alpha(word);

    return 0;
}