#include <bits/stdc++.h>
using namespace std;

long long n,k,t,t1,sum,temp;



int  main() {

	cin>>t;

	while(t--) {
		cin>>n>>k;
		vector<int> a(n);

		map<int, vector<int>,greater<int>> m;

		for(int i=0; i<n; i++) {
			cin>>a[i];
			if(a[i]>k&&a[i]%k!=0) {
				a[i]=a[i]%k;
			}
			else if (a[i]%k==0) {
				a[i]=k;
			}

			m[a[i]].push_back(i+1);
		}


// 		map<int, vector<int> > m;

// 		for(int i=0; i<n; i++) {
// 			m[a[i]].push_back(i+1);
// 		}

// 		vector<int> ans;

// 		for(auto i:m) {
// 			ans.insert(ans.end(),i.second.begin(),i.second.end());
// 		}

// 		for(auto i:ans) {
// 			cout<<i<<" ";
// 		}

		for(auto i:m) {
			for(auto j:i.second)
				cout<<j<<" ";
		}

		cout<<endl;

	}




	return 0;
}