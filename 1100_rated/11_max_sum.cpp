#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, k, s, ans;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector < ll > a(n);
        vector < ll > b(n + 1);
        vector < ll > c(n + 1);
        ans = 0;
        s = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            s = s + a[i];
        }

        sort(a.begin(), a.end());

        b[0] = 0;

        for (ll i = 0; i < n; i++) {
            b[i + 1] = b[i] + a[i];
        }

        c[n - 1] = a[n - 1];

        for (ll i = n - 2; i >= 0; i--) {
            c[i] = c[i + 1] + a[i];

        }
        c[n] = 0;




        for (ll i = 0; i <= k; i++) {

            ans = max(ans, s - b[2 * i] - c[n - (k - i)]);
        }


        cout << ans << endl;

    }


}