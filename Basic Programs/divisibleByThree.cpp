#include<iostream>
using namespace std;

int main() {

    int num;
    cin>>num;

    for(int i=1; i <= num; i++) {
        if(i%3==0) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}