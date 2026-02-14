#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, streak, ans;
bool k;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n;
        vector < ll > a(n);
        vector < ll > b(n);
        map < ll, ll > m;
        map < ll, ll > p;
        ans = 0;
        k = false;
        streak = 1;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) {
                m[a[i]] = 1;
            }

            if (i && a[i] == a[i - 1]) {
                streak += 1;
                m[a[i]] = max(m[a[i]], streak);
            }

            else if (i && a[i] != a[i - 1]) {
                streak = 1;
                m[a[i]] = max(m[a[i]], streak);
            }
        }
        streak = 1;

        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            if (i == 0) {
                p[b[i]] = 1;
            }

            if (i && b[i] == b[i - 1]) {
                streak += 1;
                p[b[i]] = max(p[b[i]], streak);
            }

            else if (i && b[i] != b[i - 1]) {
                streak = 1;
                p[b[i]] = max(p[b[i]], streak);
            }
        }


        for (auto i: m) {
            ans = max(ans, i.second + p[i.first]);
        }
        for (auto i: p) {
            ans = max(ans, i.second + m[i.first]);
        }
        cout << ans << endl;

    }
}