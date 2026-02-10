#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t,n,i,ans;

int main() {
	cin>>t;

	while(t--) {
		cin>>n;
		ans=0;
		i=1;
		while(n%i==0) {
			ans=ans+1;
			i=i+1;
		}

		cout<<ans<<endl;
	}

}