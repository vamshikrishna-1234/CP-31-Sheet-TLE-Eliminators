#include <bits/stdc++.h>
using namespace std;

int main() {

	long long t,n,b,c;
	cin>>t;
	string s;
	while(t--) {
		cin>>s;
		b=0;
		c=0;
		for(auto i:s) {
			if(i=='0') {
				b=b+1;
			}

			if(i=='1') {
				c=c+1;
			}
		}
		//cout<<b<<c<<"hh"<<endl;
		if(min(b,c)%2==1) {
			cout<<"DA"<<endl;
			continue;
		}

		if(min(b,c)%2==0) {
			cout<<"NET"<<endl;
		}

	}
}