#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, ans, q;
int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> q;
        vector < ll > a(n);
        vector < ll > b(q);

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (ll i = 0; i < q; i++) {
            cin >> b[i];
        }

        ll prev = 31;
        for (ll i = 0; i < q; i++) {
            if (b[i] >= prev) continue;
            for (ll j = 0; j < n; j++) {
                if (a[j] % (1LL << b[i]) == 0) {
                    a[j] += (1LL << (b[i] - 1));
                }
            }

            prev = b[i];

        }


        for (auto i: a) {
            cout << i << " ";
        }
        cout << endl;
    }
}