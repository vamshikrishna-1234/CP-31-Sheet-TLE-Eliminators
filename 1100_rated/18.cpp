#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n, k, ans;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector < ll > a(n);
        ans = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            a[i] = a[i] + i;
        }

        sort(a.begin(), a.end());

        ll i = 0;
        while (k-- && i < n) {
            if (k >= a[i]) {
                k = k - a[i];
                ans = ans + 1;
            }
            else break;
            i = i + 1;
        }

        cout << ans << endl;



    }
}