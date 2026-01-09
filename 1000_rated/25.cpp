#include <bits/stdc++.h>
using namespace std;
long long t,n;
bool c;

int main() {
	cin>>t;

	while(t--) {
		cin>>n;
		c=false;
		vector<long long> a(n);
		vector<long long> b(n);
		map<long long, long long> m;

		for(long long i=0; i<n; i++) {
			cin>>a[i];
			b[i]=pow(2,a[i]);
			m[a[i]]++;
		}

		for(auto i:m) {
			if(i.second>1) {
				c=true;

			}
		}
		if(c) {
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
		//cout<<ans<<endl;
	}

	return 0;
}
