#include <bits/stdc++.h>
using namespace std;

long long n,t;

bool b;

int main() {

	cin>>t;
	while(t--) {
		cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}

		//method 1-- wrong:
		//sort(a.begin(),a.end());
// 		if(gcd(a[0],a[1])<=2) {
// 			cout<<"YES"<<endl;

// 		}

		//method 2:
		b=false;
		for(int i=0; i<n; i++) {
			for(int j=i+1; j<n; j++) {
				if(gcd(a[i],a[j])<=2) {
					cout<<"YES"<<endl;
					b=true;
					break;
				}
			}
			
			if(b==true) {
				break;
			}
		}

		if (b==false) cout<<"NO"<<endl;

	}
	return 0;
}