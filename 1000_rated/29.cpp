#include <bits/stdc++.h>
using namespace std;
long long t,n,k,ans,a,b;
string s;

int main() {
	cin>>t;

	while(t--) {
		cin>>a>>b;
		ans=0;
		if(a==b) {
			cout<<0<<endl;
			continue;
		}

		if(b>a && b%a==0) {
			k=b/a;
		}
		else if (a>b && a%b==0) {
			k=a/b;
		}
		else {
			cout<<-1<<endl;
			continue;
		}
		
		while(k>1) {
			if(k%8==0) {
				k=k/8;
				ans=ans+1;
			}
			else if(k%4==0) {
				k=k/4;
				ans=ans+1;
			}
			else if(k%2==0) {
				k=k/2;
				ans=ans+1;
			}
			else {
				ans=-1;
				break;
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}
