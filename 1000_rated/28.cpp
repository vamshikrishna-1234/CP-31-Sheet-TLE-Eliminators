#include <bits/stdc++.h>
using namespace std;
long long t,n,ans,cnt1,cnt2;
string s;

int main() {
	cin>>t;

	while(t--) {
		cin>>n;
		cin>>s;
		cnt1=0;
		cnt2=0;
		ans=0;

		for(long long i=0; i<n; i++) {
			if(s[i]=='(') {
				cnt1=cnt1+1;
			}
			else cnt2++;

			if((s[i]=')') && (cnt2>cnt1)) {
				ans=ans+1;
				cnt2=cnt2-1;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}
