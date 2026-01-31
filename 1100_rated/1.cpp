#include <bits/stdc++.h>
using namespace std;
long long t,n,ans;
string s;

int main() {
	cin>>t;
	while(t--) {
		cin>>n;
		cin>>s;
        set<char> p;
        
		ans=1;
		
		p.insert(s[0]);

		if(n==1) {
			cout<<1<<endl;
			continue;
		}


		else {
			for(int i=0; i<n-1; i++) {
				// for(int j=i-1; j<=i; j++) {
				// 	p.insert(s[j]);
				// }
				p.insert(s[i+1]);
				//cout<<p.size()<<" ";
				ans=ans+p.size();
			}
		}
		cout<<ans<<endl;
	}
}