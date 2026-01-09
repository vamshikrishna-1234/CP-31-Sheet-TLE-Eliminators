#include <bits/stdc++.h>
using namespace std;
long long n,k,mini,maxi;

bool b;

long long my_div(long long a, long long b) {
	long long ans= (a+b-1)/b;
	return ans;
}

int main() {

	long long  t;
	cin>>t;

	while(t--) {

		cin>>n>>k;

		vector<long long> a(n);

		for(int i=0; i<n; i++) {
			cin>>a[i];
		}

		mini=0;
		maxi=0;

		mini=my_div(accumulate(a.begin(),a.end(),0LL),k);

		for(int i=0; i<n; i++) {
			maxi=maxi+my_div(a[i],k);
		}

		cout<<mini<<" "<<maxi<<endl;

	}
	return 0;
}