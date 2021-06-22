#include<iostream>
using namespace std;

bool maximum(int a, int b, int c) {
    
    int x, y, z;
    x = max(a, max(b, c));
    
    if(x == a) {
        y = b;
        z = c;
    }
    else if(x == b) {
        y = c; 
        z = a;
    }
    else {
        y = a;
        z = b;
    }

    if(x*x == (y*y + z*z)) {
        return true;
    }
    else {
        return false;
    }


}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if(maximum(a, b, c)) {
        cout << "Pyth triplet";
    }
    else {
        cout << "Not an Pyth triplet";
    }

    return 0;
}