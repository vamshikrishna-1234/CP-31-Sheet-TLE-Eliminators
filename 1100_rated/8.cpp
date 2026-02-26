#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, k, a, b, ans;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> k >> a >> b;
        vector < pair < ll, ll > > c(n);

        for (ll i = 0; i < n; i++) {
            cin >> c[i].first >> c[i].second;
        }

        ll th = abs(c[a - 1].first - c[b - 1].first) + abs(c[a - 1].second - c[b - 1].second);

        if (k == 0) {
            cout << th << endl;
            continue;
        }

        else {
            ll min_s = LLONG_MAX;
            ll min_t = LLONG_MAX;
            ans = 5;



            for (ll i = 0; i < k; i++) {
                min_s = min(min_s, abs(c[i].first - c[a - 1].first) + abs(c[i].second - c[a - 1].second));
                min_t = min(min_t, abs(c[i].first - c[b - 1].first) + abs(c[i].second - c[b - 1].second));
            }

            ans = min(th, min_s + min_t);


            cout << ans << endl;
        }

    }


}