#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, k, sum, m;
int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector < ll > a(n * k);
        sum = 0;
        m = 0;
        for (int i = 0; i < n * k; i++) {
            cin >> a[i];
        }



        if (n % 2 == 0) {
            m = n / 2;
        }
        else m = n / 2;

        for (int i = n * k - 1 - m; i >= 0 && k > 0; i = i - 1 - m) {
            sum = sum + a[i];
            k = k - 1;
        }
        cout << sum << endl;
    }
}