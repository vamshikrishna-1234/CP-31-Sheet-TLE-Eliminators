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
        vector < ll > b(n);
        ll l, r;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (ll i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                l = i;
                break;
            }
        }

        for (ll i = n - 1; i >= 0; i--) {
            if (a[i] != b[i]) {
                r = i;
                break;
            }
        }

        for (ll i = l; i >= 1; i--) {
            if (b[i - 1] <= b[i]) {
                l = l - 1;
            }
            else break;
        }

        for (ll i = r; i < n - 1; i++) {
            if (b[i] <= b[i + 1]) {
                r = r + 1;
            }
            else break;
        }

        cout << l + 1 << " " << r + 1 << endl;


    }
}