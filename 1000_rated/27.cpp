#include <bits/stdc++.h>
using namespace std;
long long t,n,ans, ops;

bool isfair(long long n) {
	long long k=n;
	long long temp;
	while(k>0) {
		temp=k%10;
		if(temp!=0 && n%temp!=0) {
			return false;
		}
		k=k/10;
	}
	return true;
}
int main() {
	cin>>t;

	while(t--) {
		cin>>n;
		if(isfair(n)) {
			ans=n;
		}
		else if(isfair(n)==false) {
			while(isfair(n)==false) {
				n=n+1;
			}
			ans=n;
		}
		cout<<ans<<endl;
	}

	return 0;
}
