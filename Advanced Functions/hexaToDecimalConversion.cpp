#include<bits/stdc++.h>
using namespace std;

int convert(string n) {
    int ans = 0;
    int x = 1;
    int si = n.size();
    for(int i=1; i<=si; i++) {
        if(n[i] >= '0' && n[i] <= '9') {
            ans += x*(n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F') {
            ans += x*(n[i]-'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int main() {

    string n;
    cin >> n;

    cout << convert(n);

    return 0;
}