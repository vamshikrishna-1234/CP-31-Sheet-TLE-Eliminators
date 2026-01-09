#include <bits/stdc++.h>

using namespace std;


int main() {



	int t,n,q,l,r,k;
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
		//set<int> s;
		vector<int> a(n);
		count=0;
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}
		ans=-1;
		if(n<=2){
		    ans=max(a[n-1]-a[0],a[0]-a[n-1]);
		    cout<<ans<<endl;
		    continue;
		}
        
        
        ans=a[n-1]-a[0];
        if(n>2){
            for(int i=n-2;i>=0;i--){
    		ans=max(ans,a[i]-a[i+1]);
            }
            //ans=max(ans, (a[n-1]-*min_element(a.begin(),a.end()-2)), *max_element(a.begin()+1,a.end()-1)-a[0] );
            ans = max(
            ans,
            max(
                a[n-1] - *min_element(a.begin(), a.end() - 1),
                *max_element(a.begin() + 1, a.end()) - a[0]
            )
          );
    
    
    
    // 		cout<<a[n-1] - *min_element(a.begin(), a.end() - 2)<<endl;
    		
        }
        
		cout<<ans<<endl;
	}

	return 0;


}
