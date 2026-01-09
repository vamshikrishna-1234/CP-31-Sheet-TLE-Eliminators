#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;

	long long n,k,ans,sol;

	while(t--) {
		cin>>n>>k;
		if(n==k) {
			cout<<0<<" "<<0<<endl;
			continue;
		}

		else ans=abs(n-k);
		sol=min( n%ans,ans-(n%ans) );

		cout<<ans<<" "<<sol<<endl;


		//cout<<ans<<endl;



	}
}