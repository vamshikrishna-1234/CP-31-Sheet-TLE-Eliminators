#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, c, ans;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> c;
        vector < ll > a(n);
        ans = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }


        // ans=(-4LL * s + sqrt(16LL * s * s - (4LL * 4LL * n * (t - c)) )) / (2LL * 4LL * n);
        // ans = max((-4 * s + sqrt(16 * s * s - (4 * 4 * n * (s - c)) )) / (2 * 4 * n), (-4 * s - sqrt(16 * s * s - (4 * 4 * n * (s - c)) )) / (2 * 4 * n));



        ll l = 1;
        ll r = 1e9;
        ll mid = l + (r - l) / 2;
        ll sum = 0;
        
        while (l <= r) {
            mid = l + (r - l) / 2;
            sum = 0;
            for (ll i = 0; i < n; i++) {
                sum = sum + (a[i] + 2 * mid)*(a[i] + 2 * mid);
                if (sum > c) { //using sum>=c caused me loss of 1 hour TwT
                    break;
                }

                // if (sum == c) {
                //     break;
                // }
            }

            if (sum < c) {
                l = mid + 1;
                // mid = (l + r) / 2;
            }

            else if (sum > c) {
                r = mid - 1;
                // mid = (l + r) / 2;
            }
            
            else if (sum == c) {
                ans = mid;
                break;
            }

        }

        cout << ans << endl;

    }


}
