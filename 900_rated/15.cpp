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
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        // l=*min_element(a.begin(),a.end());
        // while(a[0]<l){
        //     a[0]=a[0]/2;
        //     count =count+1;
        // }
        
        for(int i=n-1;i>=1;i--){
            if(a[i]==0 && a[i-1]>=0){
               between=false;
               break;
            }
            while(a[i-1]>=a[i] && a[i-1]>0 && a[i]!=0){
                a[i-1]=a[i-1]/2;
                count=count+1;
            }
            
        }
        if(between==true){
        cout<<count<<endl;
            
        }
        else cout<<-1<<endl;

	}

	return 0;


}
