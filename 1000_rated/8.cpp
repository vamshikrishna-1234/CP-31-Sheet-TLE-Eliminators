#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, ans;
string s;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n;
        cin >> s;
        set < char > q;
        set < char > l;
        vector < ll > a(n);
        vector < ll > b(n);
        ans = 0;

        for (ll i = 0; i < n; i++) {
            q.insert(s[i]);
            a[i] = q.size();
        }


        for (ll i = n - 1; i >= 0; i--) {
            l.insert(s[i]);
            b[i] = l.size();
        }

        for (ll i = 0; i < n - 1; i++) {
            ans = max(ans, a[i] + b[i + 1]);
        }

        cout << ans << endl;

    }
}