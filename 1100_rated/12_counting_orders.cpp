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
        vector < pair < ll, ll >> b(n);
        ans = 1;
        bool o = true;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++) {
            cin >> b[i].first;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (ll i = 0; i < n; i++) {
            b[i].second = distance(upper_bound(a.begin(), a.end(), b[i].first), a.end());
            if (b[i].second > (n - 1 - i)) {
                ans = ((ans % MOD) * ((b[i].second - (n - 1 - i)) % MOD)) % MOD;
            }
            else {
                o = false;
                break;
            }
        }

        if (o) {

            cout << ans << endl;

        }
        else cout << 0 << endl;

    }
}