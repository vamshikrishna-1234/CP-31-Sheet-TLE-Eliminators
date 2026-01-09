#include <bits/stdc++.h>
using namespace std;
long long r,max_r;

long long dist(pair<long long, long long > j, pair<long long, long long > k) {
	long long d=abs(j.first-k.first)+abs(j.second-k.second);
	return d;
}


int  main() {

	long long  t;
	cin>>t;

	while(t--) {

		r=0;
		max_r=-1;
		vector<pair<long long,long long>> a(2);
		vector<pair<long long,long long>> b(2);

		cin>>a[0].first>>a[0].second>>a[1].first>>a[1].second;

		if(a[0].first==1 && a[0].second==1) {
			cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
			continue;
		}

		//cout>>a[0].first>>a[0].second>>a[1].first>>a[1].second;

		vector<pair<long long,long long >> c(4);

		c[0].first=1;
		c[0].second=1;
		c[1].first=1;
		c[1].second=a[0].second;
		c[2].first=a[0].first;
		c[2].second=1;
		c[3].first=a[0].first;
		c[3].second=a[0].second;

		for(auto i:c) {
			for(auto j:c) {
				r=dist(i,a[1])+dist(i,j)+dist(j,a[1]);
				if(r>max_r) {
					max_r=r;
					b[0]=i;
					b[1]=j;
				}
			}
		}



		cout << b[0].first  << " "
		     << b[0].second << " "
		     << b[1].first  << " "
		     << b[1].second <<endl;


	}
	return 0;
}