// #include<iostream>
// using namespace std;


// int fact(int num) {
//     int fact=1;
//     for(int i=1; i<=num; i++) {
//         fact = fact*i;
//     }
//     return fact;
// }


// int main() {

//     int n;
//     cin >> n;

//     cout << fact(n);

//     return 0;
// }

int fact(int num) {
    int fact = 1;
    for(int i=1; i<=num; i++) {
        fact *= i;
    }
    return fact;
}

#include<iostream>
using namespace std;

int main() {

    int num;
    cin >> num;

    cout << fact(num);

    return 0;
}