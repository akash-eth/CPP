// #include<iostream>
// using namespace std;

// int fact(int num) {
//     int fact = 1;
//     for(int i=1; i<=num; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int main() {

//     int n, r;
//     cin >> n >> r;
//     int answer = fact(n)/(fact(r) * fact(n-r));
//     cout << answer;

//     return 0;
// }
#include<iostream>
using namespace std;

int fact(int num) {
    int fact = 1;
    for(int i=1; i<=num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {

    int n, r;
    cin >> n >> r;

    int ans = fact(n)/(fact(n) - fact(r))*fact(r);
    cout << ans;

    return 0;
}