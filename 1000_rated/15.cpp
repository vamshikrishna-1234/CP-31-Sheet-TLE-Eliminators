#include <bits/stdc++.h>
using namespace std;


long long t,n,k,cnt,ans;
bool c;
string s;
char t1,t2;

int main() {
	cin>>t;
	while(t--) {

		cin>>n>>k;
		cin>>s;
		cnt=0;
		for(int i=0; i<k; i++) {
			if(s[i]=='B') {
				cnt=cnt+1;
			}
		}

		long long l=0;
		long long r=k-1;
		ans=k-cnt;
		//cout<<ans;
		if(cnt>k) {
			cout<<0<<endl;
			continue;
		}

		else if(cnt<k) {
			while(r<n-1) {
				t2=s[r+1];
				t1=s[l];
				if(t1==t2) {
					l=l+1;
					r=r+1;
				}
				if(t1!=t2) {
					if(t2=='B'&&t1=='W') {
						cnt++;
						ans=min((k-cnt),ans);
						l=l+1;
						r=r+1;
					}
					if(t2=='W'&&t1=='B') {
						cnt--;
						ans=min((k-cnt),ans);
						l=l+1;
						r=r+1;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}