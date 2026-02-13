#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

string s;
ll t,n;
int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> s;
        n=s.size();
        if (s[0] != s[n - 1]) {
            if (s[0] == 'a') {
                s[0] = 'b';
            }
            else s[0] = 'a';
        }
        cout << s << endl;
    }

}