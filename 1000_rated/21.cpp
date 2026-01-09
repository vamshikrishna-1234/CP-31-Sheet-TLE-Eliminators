#include <bits/stdc++.h>
using namespace std;
long long t,sol;
string s1,s2;
long long len;
int main() {
	cin>>t;
	while(t--) {
		cin>>s1;
		cin>>s2;
		string ans;
		len=min(s1.size(),s2.size());
		while(len) {
			for(int i=0; i<s1.size(); i++) {
				for(int j=0; j<s2.size(); j++) {
					if(s1.substr(i,len)==s2.substr(j,len) && (s2.substr(j,len)).size()>ans.size()) {
						ans=s2.substr(j,len);
					}
				}
			}
			len--;
		}
		sol=s1.size()+s2.size()-2*ans.size();
		cout<<sol<<endl;
	}
	return 0;
}
