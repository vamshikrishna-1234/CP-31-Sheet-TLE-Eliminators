#include <bits/stdc++.h>
using namespace std;

int main() {

	long long t,n,b,c,ans;
	cin>>t;
	string s;
	while(t--) {
		cin>>s;
		b=0;
		c=0;
		ans=0;
		for(auto i:s) {
			if(i=='0') {
				b=b+1;
			}

			if(i=='1') {
				c=c+1;
			}


		}

		string t;
		for(int i=0; i<s.size(); i++) {
			if(s[i]=='0' && c>0) {
				t.push_back(1);
				c=c-1;
			}
			else if(s[i]=='0' && c<=0) {
				break;
			}

			if(s[i]=='1' && b>0) {
				t.push_back(0);
				b=b-1;
			}
			else if(s[i]=='1' && b<=0) {
				break;
			}
		}



		cout<<s.size()-t.size()<<endl;

	}
}