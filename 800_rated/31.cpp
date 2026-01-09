#include <bits/stdc++.h>
using namespace std;

long long n,a,k,t;

bool b;

int main() {

	cin>>t;
	while(t--) {
		cin>>n>>a>>k;
		b=false;
// 		cout<<n<<a<<k<<(n-(a+k));
		if(n==1) {
			b=true;
			//ntinue;
		}

// 		else if(n==2||n==3){
//             b=false;
//             //ntinue;
// 		}

		else if( (n-(a+k)) >= 2 || (a==n&&k==n)) {
			b=true;
			//cout<<"h";
			//ntinue;
		}

		if(b==true) {
			cout<<"YES"<<endl;
		}
		else if(b==false) {
			cout<<"NO"<<endl;
		}


	}
	return 0;
}