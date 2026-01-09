#include <bits/stdc++.h>
using namespace std;
long long t,n,x,ans;


int main() {
	cin>>t;
	while(t--) {
		cin>>n>>x;
		vector<long long> a(n);
		vector<pair<long long, long long>> b(n);
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}

		for(int i=0; i<n; i++) {
			b[i].first=a[i]-x;
			b[i].second=a[i]+x;
		}

		ans=0;

		for(int i=0; i<n-1; i++) {

			if(max(b[i].first,b[i+1].first)>min(b[i].second,b[i+1].second)) {
				ans=ans+1;

			}

			if(max(b[i].first,b[i+1].first)<=min(b[i].second,b[i+1].second)) {
				//ans=ans+1;
				b[i+1].first=max(b[i].first,b[i+1].first);
				b[i+1].second=min(b[i].second,b[i+1].second);
			}

		}

		cout<<ans<<endl;
	}
	return 0;
}