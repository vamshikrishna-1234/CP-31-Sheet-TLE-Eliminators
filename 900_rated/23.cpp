#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	long long n,ans;

	while(t--) {
		cin>>n;
		vector<long long> a(n);




		for(int i=0; i<n; i++) {
			cin>>a[i];

		}

		if(n==1) {
			cout<<a[0]<<endl;
			continue;
		}

		ans=a[0];
		for(int i=1; i<n; i++) {
			ans=ans&a[i];

		}


		cout<<ans<<endl;



	}
}