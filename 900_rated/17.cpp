#include <bits/stdc++.h>

using namespace std;


int main() {



	long long t,n,q,l,r,k;
	int mini;
	cin>>t;
	int count,ans;
	string s;
	int max_count;
	int v;
//bool q;
	while(t--) {

		//q=true;
		//ans=0;
		cin>>n;
		q=n;
		//set<int> s;
		vector<long long> a(n);
		long long count=0;
		long long ans=0;
		bool between=true;
		map<long long, long long> m;

		for(int i=0; i<n; i++) {
			cin>>a[i];
			m[a[i]]=m[a[i]]+1;
		}

		if(n==1) {
			cout<<0<<endl;
			continue;
		}

		int best_freq=-1;
		int best_val=-1;

		for(auto i:m) {
			if(i.second>best_freq) {
				best_val=i.first;
				best_freq=i.second;
			}
		}

		for(int i=best_freq; i<n; i=i*2) {
			count=count+1;
		}

		count=count+(n-best_freq);

		cout<<count<<endl;


	}

	return 0;


}
