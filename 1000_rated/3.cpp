#include <bits/stdc++.h>
using namespace std;

long long n,k,t,sum,ans,temp;



int  main() {

	cin>>t;
	while(t--) {

		cin>>n>>k;

		vector<long long > a(n);
		//vector<long long > a1(n);
		vector<long long > b(n);
		//vector<long long > b1(n);
		map<long long ,long long > m;

		for(long long i=0; i<n; i++) {
			cin>>a[i];

		}

		for(long long i=0; i<n; i++) {
			cin>>b[i];

		}

		for(long long i=0; i<n; i++) {
			m[b[i]]=m[b[i]]+a[i];

		}

		sum=0;
		ans=0;

		ans=ans+k;
		sum=sum+1;

		if(k<*min_element(b.begin(),b.end())) {
			ans=ans+(n-1)*k;
		}

		else {
			auto it=m.begin();
			while(sum!=n) {
				if(k<(*it).first) {
					ans=ans+(n-sum)*k;
					sum=n;
					break;
				}
				temp=min((n-sum),(*it).second);
				sum=sum+temp;
				ans=ans+temp*((*it).first);
				it++;
			}
		}



		cout<<ans<<endl;

	}
	return 0;
}