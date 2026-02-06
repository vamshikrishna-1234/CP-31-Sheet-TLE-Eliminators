#include <bits/stdc++.h>
using namespace std;

long long t,m,n,ans;

int main() {

	cin>>t;

	while(t--) {
		cin>>m;
		ans=0;
		vector<long long> b;
		vector<long long> c;
		while(m--) {
			cin>>n;
			vector<long long> a(n);



			for(int i=0; i<n; i++) {
				cin>>a[i];
			}

			sort(a.begin(),a.end());

			ans=ans+a[1];

			b.push_back(a[0]);
			c.push_back(a[1]);
		}
		ans=ans-*min_element(c.begin(),c.end());
		ans=ans+min(*min_element(b.begin(),b.end()), *min_element(c.begin(),c.end()));
		cout<<ans<<endl;


	}

}
