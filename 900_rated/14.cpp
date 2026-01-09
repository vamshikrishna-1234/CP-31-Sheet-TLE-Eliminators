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
		vector<int> a(2);
		long long count=0;
		long long ans=0;
        //bool between=true;
        if(n%2==1 || n<4){
            cout<<-1<<endl;
            continue;
        }
		while(n%6!=0){
		    n=n-4;
		    count=count+1;
		    
		}
        count=count+n/6;
        //a[0]=count;
        //cout<<q<<"q ";
		while(q%4!=0){
		    q=q-6;
		    ans=ans+1;
		    
		}
        ans=ans+q/4;
        //a[1]=ans;
        

		cout<<count<<" "<<ans<<endl;

	}

	return 0;


}
