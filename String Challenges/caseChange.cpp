#include<iostream>
#include<string>

using namespace std;


int main() {

    string s = "aKAsh";
    
    /*  
        lower => upper:
            cout << 'a' - 'A';
            output: 32 (means small 'a' is 32 times ahead then 'A', and we need to do s[i] -= 32 to reach from 'a' to 'A');
        upper => lower:
            cout << 'A' - 'a';
            output: -32 (so we need to do s[i] += 32 to reach from 'A' to 'a');
    */
   
   // so, convert lower to uppercase and upper to lowercase
    for(int i=0; i<s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
        }
        else {
            s[i] += 32;
        }
        cout << s[i];
    }

    return 0;
}