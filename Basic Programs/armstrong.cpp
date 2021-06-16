#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int sum=0;
    int originlaN = n;
    while(n>0) {
        int rem = n%10;
        sum += pow(rem, 3);
        n = n/10;
    }
    if(sum == originlaN) {
        cout << "Armstrong";
    }
    else {
        cout << "Not an armstrong";
    }
    

    return 0;
}