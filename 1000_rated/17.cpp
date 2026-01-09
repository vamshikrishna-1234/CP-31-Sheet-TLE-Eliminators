#include <bits/stdc++.h>
using namespace std;
long long t,n;

int main() {
	cin>>t;
	while(t--) {
		cin>>n;
		for(long long i=25; i>=0; i--) {
			if(n>pow(2LL,i)) {
				for(long long j=pow(2LL,i)-1; j>=0; j--) {
					cout<<j<<" ";
				}
				for(long long k=pow(2LL,i); k<n; k++) {
					cout<<k<<" ";
				}
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}