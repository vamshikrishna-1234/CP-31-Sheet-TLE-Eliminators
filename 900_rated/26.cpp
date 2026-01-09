#include <bits/stdc++.h>
using namespace std;
long long n;

bool b;
int main() {

	long long  t;
	cin>>t;

	while(t--) {

		cin>>n;
		b=false;

		if(n%2) {
			cout<<"YES"<<endl;
			continue;
		}

		if(n%2==0) {
			while(n>2) {
				n=n/2;
				if(n%2==1) {
					b=true;
					break;
				}
				else if(n%2==0) {
					b=false;
				}

			}
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