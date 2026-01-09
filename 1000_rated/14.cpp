#include <bits/stdc++.h>
using namespace std;


long long t,n,ans;
bool c;
int main() {
	cin>>t;
	while(t--) {

		cin>>n;
		vector<int> a(n);
		vector<int> b(n);
		map<int,int> m;

		for(int i=0; i<n; i++ ) {
			cin>>a[i];
			m[a[i]]++;
		}
		c=false;

		for(auto i:m) {
			if (i.second==1) {
				cout<<-1<<endl;
				c=true;
				break;

			}
		}

		int l=0;
		int r=0;
		if(c==false) {

			for(int i=0; i<n; i++) {
				b[i]=i+1;
			}
			while(r<n) {
				if(a[r]==a[l]) {
					r++;
				}

				else if(a[r]!=a[l]) {
					rotate(b.begin()+l,b.begin()+l+1,b.begin()+r);
					l=r;
				}


			}
			rotate(b.begin()+l,b.begin()+l+1,b.begin()+r);
			for(auto i:b) {
				cout<<i<<" ";
			}
			cout<<endl;
		}


	}
	return 0;
}