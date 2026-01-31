#include <bits/stdc++.h>
using namespace std;
long long t,n,k,ans;

int main() {
	cin>>t;
	while(t--) {
		cin>>n>>k;
		vector<long long> a(n);
		vector<long long> b(n);
		vector<long long> pf(n+1);
		pf[0]=0;
		ans=0;

		for(int i=0; i<n; i++) {
			cin>>a[i];
			if(i) {
				pf[i]=a[i-1]+pf[i-1];
			}
		}
         
        pf[n]=pf[n-1]+a[n-1];
        
		for(int i=0; i<n; i++) {
			cin>>b[i];
			if(i) {
				b[i]=max(b[i],b[i-1]);
			}
		}




		for(int i=0; i<min(n,k); i++) {
			ans=max(pf[i+1]+(k-(i+1))*b[i], ans);
		}

		cout<<ans<<endl;
	}
}