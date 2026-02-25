#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, ans, q, ind;

ll f(vector < ll > a, ll mid) {
    ll an = 0;
    for (auto i: a) {
        an = an + max((mid - i), 0LL);
    }
    return an;
}

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> q;
        vector < ll > a(n);
        //vector < ll > b(n);
        ans = 0;
        ind = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        //sort(a.begin(), a.end());

        // b[0] = a[0];
        // for (ll i = 1; i < n; i++) {
        //     b[i] = b[i - 1] + a[i];
        // }

        // for (ll i = 1; i < max(n,q); i++) {
        //     auto it = lower_bound(a.begin(), a.end(), i);

        //     if (it != a.end()) {
        //         ind = distance(a.begin(), it) + 1;
        //     }
        //     else ind = distance(a.begin(), it);

        //     //cout << i << " " << ind << endl;

        //     if (i <= n - 1) {
        //         if (i * (ind) - b[ind-1] <= q) {
        //             ans = i;
        //         }
        //         else break;
        //     }
        //     else {
        //         if (i * (ind) - b[n - 1] <= q) {
        //             ans = i;
        //         }
        //         else break;
        //     }

        // }

        ll l = 1;
        ll r = * max_element(a.begin(), a.end()) + q;
        ll mid = (l + r) / 2;

        while (l <= r) {
            if (f(a, mid) > q) {
                r = mid - 1;
                mid = (l + r) / 2;
            }

            else {
                ans = mid;
                l = mid + 1;
                mid = (l + r) / 2;
            }
        }


        cout << ans << endl;

    }


}