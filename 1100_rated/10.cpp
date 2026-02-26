#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, x, ans;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector < ll > a(n);
        vector < ll > b(n);
        vector < ll > c(n);
        ans = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (ll i = 0; i < n; i++) {
            cin >> c[i];
        }

        for (ll i = 0; i < n; i++) {
            if ((a[i] | x) > x) {
                break;
            }
            else if ((a[i] | x) <= x) {
                ans = ans | a[i];
            }
        }

        for (ll i = 0; i < n; i++) {
            if ((b[i] | x) > x) {
                break;
            }
            else if ((b[i] | x) <= x) {
                ans = ans | b[i];
            }
        }

        for (ll i = 0; i < n; i++) {
            if ((c[i] | x) > x) {
                break;
            }
            else if ((c[i] | x) <= x) {
                ans = ans | c[i];
            }
        }

        if (ans == x) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }


}