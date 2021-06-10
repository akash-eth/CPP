#include<iostream>
using namespace std;

int main() {

    int money=100;

    for(int i=1; i <= 30; i++) {
        if(i%2 == 0){
            continue;
        }
        if(money == 0) {
            break;
        }
        cout << "go out for shop - " << i << endl;
        money = money - 10;
        
    }

    return 0;
}