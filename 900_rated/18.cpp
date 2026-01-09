#include <bits/stdc++.h>

using namespace std;


int main() {


	int t;
	cin>>t;

//bool q;
	while(t--) {


		vector<long long> a(3,0);

		bool between=false;

		for(int i=0; i<3; i++) {
			cin>>a[i];
		}

		int p1=a[1]-a[0];
		int p2=a[2]-a[1];

		if(p1==p2) {
			cout<<"YES"<<endl;
			continue;
		}

		else if( ((a[0]+a[2])%(2*a[1])==0) && (a[0]+a[2])>0  ) {
			cout<<"yes"<<endl;
			continue;
		}

		else if( (p1+a[1])%a[2]==0 && (p1+a[1])>0) {
			cout<<"YEs"<<endl;
			continue;
		}

		else if(  ((a[1]-p2)%a[0]==0) && (a[1]-p2)>0  ) {
			cout<<"YES"<<endl;
			continue;
		}

		cout<<"NO"<<endl;


	}

	return 0;


}
