#include <bits/stdc++.h>
using namespace std;

long long n,t,k;

int  main() {

	cin>>t;
	while(t--) {
		cin>>n;

		vector<long long> a;

		cin>>k;
		a.push_back(k);
		for(int i=1; i<n; i++) {

			cin>>k;
			//cout<<k;
			if(k>=a.back()) {
				a.push_back(k);
			}

			else if(k<a.back()) {
				a.push_back(k);
				a.push_back(k);
			}
		}

		cout<<a.size()<<endl;

		for(int i:a) {
			cout<<i<<" ";
		}
		cout<<endl;

	}
	return 0;
}