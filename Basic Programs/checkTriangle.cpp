#include<iostream>
#include<cmath>
using namespace std;

 
int main() {

    int side1, side2, side3;
    cout << "Enter side 1" << endl;
    cin >> side1;
    cout << "Enter side 2" << endl;
    cin >> side2;
    cout << "Enter side 3" << endl;;
    cin >> side3;

    if(side1 == side2 && side2 == side3) {
        cout << "Triangle is equilateral";
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "Triangle is isoscles";
    }
    else {
        cout << "scalne triangle";
    }

    return 0;
}