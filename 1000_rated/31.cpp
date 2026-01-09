#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
bool b;

int main() {
	cin>>n;
	cin>>s;
	b=false;

	for(long long i=0; i<n-1; i++) {
		if(s[i]>s[i+1]) {
			cout<<"YES"<<endl;
			cout << i+1 << " " << i+2<< endl;
			b=true;
			break;
		}
	}
	if(b==false) {
		cout<<"NO"<<endl;
	}
	//cout<<endl;

	return 0;
}
