#include <bits/stdc++.h>
using namespace std;

long long n,t,k;

bool b;

int main() {

	cin>>t;
	while(t--) {
		cin>>n>>k;
		b=false;

		if(n%2==1 && k%2==0) {
			cout<<"NO"<<endl;
			continue;
		}

		for(long long  i=0; i<=n/k; i++) {
			if((n-k*i)%2==0) {
				cout<<"YES"<<endl;
				b=true;
				break;
			}
		}

		if(b==false) {
			cout<<"NO"<<endl;
		}

	}
	return 0;
}