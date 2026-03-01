#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n, cnt, ans;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n;
        vector < ll > a(n);
        vector < ll > b;
        ans = 0;
        cnt = 0;
        ll ps = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            ps = ps + abs(a[i]);
            b.push_back(abs(a[i]));
        }

        sort(a.begin(), a.end());

        for (ll i = 0; i < n; i++) {
            if (a[i] < 0) {
                cnt = cnt + 1;
            }
        }

        sort(b.begin(), b.end());

        if (cnt % 2 == 0) {
            cout << ps << endl;
        }

        else if (cnt % 2 == 1) {
            cout << (ps - 2 * b[0]) << endl;

        }



    }
}