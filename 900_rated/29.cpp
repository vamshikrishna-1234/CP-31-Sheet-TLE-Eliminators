#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll t, n, ans;
bool k;

int main() {
    // your code goes here
    cin >> t;
    while (t--) {
        cin >> n;
        vector < ll > a(n);
        k = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            if (i - 1 > 0) {
                if (a[i - 1] > a[i - 2] && a[i - 1] > a[i]) {
                    cout << "YES" << endl << i - 1 << " " << i << " " << i + 1 << endl;
                    k = true;
                    break;
                }
            }
        }

        if (!k) {
            cout << "NO" << endl;
        }


    }
}