#include <bits/stdc++.h>
using namespace std;

long long n,k,t,q,sum,ans;

long long f(long long  n, long long k){
    if(n>=k){
    long long ans=(n-k+1)*(n-k+2)/2;
    return ans;
    }
    else return 0LL;
}


int  main() {

	cin>>t;

	while(t--) {
		cin>>n>>k>>q;
		vector<int> a(n);
		
		ans=0;
        sum=0; 
        
		for(int i=0; i<n; i++) {
		    
			cin>>a[i];
			
			if(a[i]<=q){
			    sum=sum+1;
			}
			
			else if(a[i]>q){
			    ans=ans+f(sum,k);
			    sum=0;
			}

			
		}
		
		ans=ans+f(sum,k);
		sum=0;
			
		cout<<ans<<endl;



	}




	return 0;
}