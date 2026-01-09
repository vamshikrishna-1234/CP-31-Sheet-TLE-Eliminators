#include <bits/stdc++.h>
using namespace std;
long long t,n,temp,ans,sol;
int main() {
	cin>>t;
	while(t--) {
		cin>>n;
		vector<long long>a(n);
		vector<pair<long long, long long>>m(n);
		vector<long long> ans(n+1);

		for(long long i=0; i<n; i++) {
			cin>>a[i];
			m[i].second=i;
			m[i].first=a[i];
		}

		sort(m.rbegin(),m.rend());

		sol=0;
		ans[0]=0;
		temp=-1;
		for(auto i:m) {
			if(temp<0) {
				ans[i.second+1]=temp;
				sol+=i.first*abs(temp)*2;
				temp=-temp;
			}

			else if(temp>0) {
				ans[i.second+1]=temp;
				sol+=i.first*abs(temp)*2;
				temp=-(abs(temp)+1);
			}
		}
		cout<<sol<<endl;
		for(auto j:ans) {
			cout<<j<<" ";
		}

		cout<<endl;
	}
}