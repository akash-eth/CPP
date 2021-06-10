#include<iostream>
using namespace std;

int main() {

    for(int i=1; i<=30; i++) {

        if(i%2 == 0) {
            continue;
        }
        cout << "go out for shopping-" <<  i << endl;
    }

    return 0;
}