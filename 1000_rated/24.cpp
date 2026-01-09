#include <bits/stdc++.h>
using namespace std;
long long t,ans,s,n,m,temp,cnt;
bool b;

int main() {
	cin>>t;

	while(t--) {
		cin>>n>>m;
		s=0;
		b=false;

		ans=0;
		cnt=0;
		vector<long long>a;
		for(long long i=0; i<n; i++) {
			for(long long j=0; j<m; j++) {
				cin>>temp;
				s=s+abs(temp);
				if(temp==0) {
					b=true;
				}
				else if(temp<0) {
					cnt=cnt+1;
				}
				a.push_back(abs(temp));
			}
		}

		sort(a.begin(),a.end());

		if(b==true) {
			ans=s;
		}
		else if(b==false) {
			if(cnt%2==0) {
				ans=s;
			}
			else if(cnt%2!=0) {
				//cout<<s;
				ans=s-2*a[0];
				//cout<<"here";
			}
		}
// 		cout<<n<<m<<" oo";
// 		for(auto i:a){
// 		    cout<<i<<" ";
// 		}
		cout<<ans<<endl;
	}

	return 0;
}
