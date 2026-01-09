#include <bits/stdc++.h>
using namespace std;
long long t,w,h,temp1,temp2,k,ans;

int main() {
	cin>>t;
	while(t--) {
		cin>>w>>h;
		int p=2;
		temp1=0;
		temp2=0;
		while(p) {
			cin>>k;
			vector<long long> a(k);
			for(int i=0; i<k; i++) {
				cin>>a[i];
			}
			p--;
			temp1=max(temp1,a[k-1]-a[0]);
		}
		temp1=temp1*h;
		p=2;
		while(p) {
			cin>>k;
			vector<long long> a(k);
			for(int i=0; i<k; i++) {
				cin>>a[i];
			}
			p--;
			temp2=max(temp2,a[k-1]-a[0]);
		}
		temp2=temp2*w;

		ans=max(temp1,temp2);
		cout<<ans<<endl;
	}
	return 0;
}