#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n, k, ops, ans;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector < vector < ll > > a(n, vector < ll > (n));
        ops = 0;

        for (ll i = 0; i < n; i++) {
            for (ll j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }

        for (ll i = 0; i < n / 2; i++) {
            for (ll j = 0; j < n; j++) {
                if (a[i][j] != a[n - 1 - i][n - 1 - j]) {
                    ops = ops + 1;
                }
            }
        }

        if (n % 2) {
            for (ll j = 0; j < n / 2; j++) {
                if (a[n / 2][j] != a[n / 2][n - 1 - j]) {
                    ops = ops + 1;

                }
            }


        }

        if (n % 2) {
            if (k >= ops) {
                cout << "YES" << endl;
            }

            else if (k < ops) {
                cout << "NO" << endl;
            }
        }

        else {
            if ((k >= ops) && ((k - ops) % 2 == 0)) {
                cout << "YES" << endl;
            }

            else if ((k < ops) || ((k - ops) % 2 != 0)) {
                cout << "NO" << endl;
            }

        }

    }
}