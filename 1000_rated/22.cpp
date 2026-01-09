#include <bits/stdc++.h>
using namespace std;
long long t,ans,a,b,cnt,curr;

int main() {
	cin>>t;
	while(t--) {
		cin>>a>>b;
		ans=0;
		if(a<b) {
			cout<<1<<endl;
			continue;
		}

		if(b==1) {
			curr=a;
			ans=1;
			while(curr>0) {
				curr=curr/2;
				ans=ans+1;
			}
			//ans=temp+2LL;
		}

		else {
			curr=a;
			while(curr>0) {
				curr=curr/b;
				ans=ans+1;
			}
			//ans=temp+1LL;

		}

		//k=0;

		for(long long i=0; i<=30; i++) {

			//b_copy=b+i;
			cnt=i;
			curr=a;
			if(b+i==1) {
				continue;
			}
			while(curr>0) {
				curr=curr/(b+i);
				cnt=cnt+1;
			}
			//temp2=floor(log(a)/log(b_copy))+k+1LL;
			ans=min(ans,cnt);
		}


		cout<<ans<<endl;
	}
	return 0;
}
