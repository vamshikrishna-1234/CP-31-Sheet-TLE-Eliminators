#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll t, n, op;
string s;


ll check(char k, char l, string s) {
    ll ans = 0;
    bool done = false;
    for (int i = s.size() - 1; i >= 0; i--) {

        if (s[i] != l) {
            ans = ans + 1;
        }

        else if (s[i] == l && i != 0) {
            done = true;
            for (int j = i - 1; j >= 0; j--) {

                if (s[j] != k) {
                    ans = ans + 1;
                }

                else if (s[j] == k) {
                    //done=true;
                    break;
                }

            }
        }

        if (done == true) {
            break;
        }
        else continue;

    }
    return ans;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        op = 0;

        op = min(check('2', '5', s), check('7', '5', s));
        op = min(op, check('0', '0', s));
        op = min(op, check('5', '0', s));




        cout << op << endl;
    }



}