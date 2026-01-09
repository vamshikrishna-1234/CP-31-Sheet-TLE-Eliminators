#include <bits/stdc++.h>
using namespace std;

long long n,t,k,x;

int  main() {

	cin>>t;
	while(t--) {
		cin>>n>>k>>x;

		if(x!=1) {
			cout<<"YES"<<endl;
			cout<<n<<endl;
			while(n--) {
				cout<<1<<" ";
			}
		}

		else if(x==1 && k==1) {
			cout<<"NO";

		}

		else if(x==1 && (n%2==0) ) {
			cout<<"YES"<<endl;
			cout<<n/2<<endl;
			while(n) {
				cout<<2<<" ";
				n=n-2;
			}
		}

		else if(x==1 && (n%2==1) && k<=2) {
			cout<<"NO";
		}

		else if(x==1&& (n%2==1) &&k>=3) {
			cout<<"YES"<<endl;
			cout<<n/2<<endl;
			cout<<3<<" ";
			n=n-3;
			while(n) {
				cout<<2<<" ";
				n=n-2;
			}
		}




		cout<<endl;

	}
	return 0;
}