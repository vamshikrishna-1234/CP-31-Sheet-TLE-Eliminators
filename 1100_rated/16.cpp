#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n, ans;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n;
        vector < ll > a(n);
        vector < ll > b(n);
        bool k = true;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        b[0] = a[0];
        for (ll i = 1; i < n; i++) {
            b[i] = b[i - 1] + a[i];
            if (b[i - 1] < a[i]) {
                k = false;
            }
        }


        if (k && (b[0] == 1)) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }
}