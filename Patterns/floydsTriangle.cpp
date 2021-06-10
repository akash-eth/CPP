#include<iostream>
using namespace std;

int main() {

    int num;
    cin >> num;


    int k=1;
    for(int i=1; i<=num; i++) {
        
        for(int j=1; j<=i; j++) {
            
            cout << k << " ";
            k++;
        }
        cout << endl;
    }


    return 0;
}