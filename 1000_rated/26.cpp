#include <bits/stdc++.h>
using namespace std;
long long t,x,y,k,ans;

int main() {
	cin>>t;

	while(t--) {
		cin>>x>>y>>k;
		ans=0;

		if((k+k*y-1)%(x-1)==0) {
			ans=ans+(k+k*y-1)/(x-1);
		}
		else ans=ans+(k+k*y-1)/(x-1)+1;

		ans=ans+k;
		cout<<ans<<endl;
	}

	return 0;
}
