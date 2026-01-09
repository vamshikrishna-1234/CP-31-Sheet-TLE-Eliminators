#include <bits/stdc++.h>
using namespace std;

long long t,p,n,ans,temp;

int main() {
	cin>>n;
	cin>>p;

	vector<int> a(n);

	for(int i=0; i<n; i++) {
		cin>>a[i];
	}

	vector<int> b;
	b=a;

	sort(b.begin(),b.end());

	if(b[n-1]*n<=p) {
		cout<<0;
		return 0;
	}

	long long l=0;
	long long r=n-1;
	//long long m=(l+r)/2;
	ans=0;

	while(l<=r && l+temp<=r) {
		if(b[r]>p) {
			ans=ans+1;
			r=r-1;
		}

		else if(b[r]<=p) {
			temp=(p-b[r])/b[r]+1;
			if(l+temp<=r) {
				l=l+temp;
				r=r-1;
				ans=ans+1;
			}
		}
	}

	cout<<ans<<endl;

	return 0;
}