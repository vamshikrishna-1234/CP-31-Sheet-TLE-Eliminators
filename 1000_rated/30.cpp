#include <bits/stdc++.h>
using namespace std;
long long t,n,k,ans,a,b;
string s;

int main() {
	cin>>t;

	while(t--) {
		cin>>n;
		vector<long long> a(n);
		ans=0;
		
		for(long long i=0;i<n;i++){
		    cin>>a[i];
		}
        
        sort(a.begin(),a.end(),greater<long long>());
        
		for(auto i:a){
		    cout<<i<<" ";
		}
		
		cout<<endl;
	}

	return 0;
}
