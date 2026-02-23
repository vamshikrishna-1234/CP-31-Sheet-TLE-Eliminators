#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n, m, k, ans;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        vector < ll > a(n);
        vector < ll > pf(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        pf[0] = a[0];
        for (ll i = 1; i < n; i++) {
            pf[i] = pf[i - 1] + a[i];
        }

        ans = 0;

        for (ll i = 1; i <= n; i++) {
            if (n % i != 0) {
                continue;
            }
            else {
                m = pf[i - 1];
                k = pf[i - 1];
                for (int j = i + i - 1; j < n; j = j + i) {
                    m = max(m, pf[j] - pf[j - i]);
                    k = min(k, pf[j] - pf[j - i]);
                }
            }

            ans = max(ans, m - k);
        }

        cout << ans << endl;
    }
}