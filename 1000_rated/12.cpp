#include <bits/stdc++.h>
using namespace std;

long long t,n,k,b,s,temp1,temp2;

int main() {
	cin>>t;
	while(t--) {
		cin>>n>>k>>b>>s;
		vector<long long> a(n,0);

		if(s<b*k || s>(b*k+n*(k-1))) {
			cout<<-1<<endl;
			continue;
		}

		if(k==1) {
			if(b!=s) {
				cout<<-1<<endl;
			}
			else if(b==s) {
				cout<<s<<" ";
				if(n>1) {
					for(int i=1; i<n; i++) {
						cout<<0<<" ";
					}
				}
				cout<<endl;
			}
			continue;
		}

		temp1=(s-k*b)%(k-1);
		temp2=(s-k*b)/(k-1);

		if(n<(min(1LL,temp1)+temp2)) {
			cout<<-1<<endl;
			continue;
		}

		else if(n>=(min(1LL,temp1)+temp2)) {
			if(temp1==0) {
				a[0]+=k*b;
				for(int i=0; i<temp2; i++) {
					a[i]+=k-1;
				}
			}
			if(temp1>0) {
				a[0]=k*b+temp1;
				for(int i=1; i<=temp2; i++) {
					a[i]=k-1;
				}
			}
		}

		for(auto i:a) {
			cout<<i<<" ";
		}
		cout<<endl;

	}
}