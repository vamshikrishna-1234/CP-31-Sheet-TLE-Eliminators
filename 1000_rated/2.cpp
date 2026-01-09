#include <bits/stdc++.h>
using namespace std;

int n,k,t,ans,ec,c;

bool b;

int main() {

	cin>>t;
	while(t--) {

		cin>>n>>k;

		vector<int> a(n);

		c=0;
		ec=0;

		for(int i=0; i<n; i++) {
			cin>>a[i];
			if(a[i]%2==0) {
				ec=ec+1;
			}

			if(a[i]%4==0) {
				c=c+1;
			}
		}



		if(k==2) {
			ans=1;
			//cout<<"njfek";
			for(int i:a) {

				if(i%2==0) {
					ans=0;
					break;
				}
				ans=min(ans,i%2);
			}
		}

		else if(k==3) {
			ans=2;
			for(int i:a) {
				if(i%k==0) {
					ans=0;
					break;
				}
				ans=min(ans,k-i%k);
			}
		}

		else if(k==4) {

			if(c>=1) {
				ans=0;
			}

			else if(ec>=2) {
				ans=0;
			}

			else if(ec==1) {
				ans=1;
			}

			else {
				ans=2;
				for(int i:a) {
					ans=min(2,min(ans,k-i%k));
					if(ans==0) {
						break;
					}
				}

			}

		}

		else if(k==5) {
			ans=4;

			for(int i:a) {
				if(i%k==0) {
					ans=0;
					break;
				}
				ans=min(ans,k-i%k);
			}
		}

		cout<<ans<<endl;

	}
	return 0;
}