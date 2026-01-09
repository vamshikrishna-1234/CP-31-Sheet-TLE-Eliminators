#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	long long n,p,q,ans;

	while(t--) {
		cin>>n;
		vector<long long> a(n);

		p=0;
		q=0;

		for(int i=0; i<n; i++) {
			cin>>a[i];
			if(a[i]==0) {
				p=p+1;
			}
			if(a[i]==1) {
				q=q+1;
			}
		}

		ans=pow(2,p)*q;

		cout<<ans<<endl;



	}
}