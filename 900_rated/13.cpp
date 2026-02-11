#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll t, n, ans, first_non, last_non, c;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        vector < ll > a(n);
        first_non = -1;
        last_non = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        c = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                first_non = i;
                break;
            }

        }

        for (int i = n-1; i > 0; i--) {
            if (a[i] != 0) {
                last_non = i;
                break;
            }
        }

        if (first_non == -1) {
            cout << 0 << endl;
            continue;
        }

        for (int i = first_non; i <= last_non; i++) {
            if (a[i] == 0) {
                c = c + 1;
            }
        }

        if (c == 0) {
            cout << 1 << endl;
        }
        else if (c > 0) {
            cout << 2 << endl;
        }
    }


}