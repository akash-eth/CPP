#include<iostream>
using namespace std;

int main() {
    
    // rows and cols will the define the hight and width of the rectangle
    int row, col;
    cin>>row>>col;

    for(int i=1; i<=row; i++) {
        for(int j=1; j<=col; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}