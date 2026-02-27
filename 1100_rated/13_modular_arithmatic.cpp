#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n, ans;

long long MOD = 1e9 + 7;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n;
        vector < ll > a(n);
        ans = 1;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        ll l = 0;
        ll r = n - 1;

        ans = a[l] - a[r];

        while (l < r) {
            ans = gcd(ans, a[l] - a[r]);
            l = l + 1;
            r = r - 1;
        }

        cout << ans << endl;

    }
}