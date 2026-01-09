#include <bits/stdc++.h>
using namespace std;

long long n,k,t,cnt,c;
bool b;


int main() {
	cin>>t;
	while(t--) {
		cin>>n;
		if(n%5==0 || n%7==0 || n%11==0) {
			cout<<-1<<endl;
			continue;
		}

		k=n;
		cnt=0;
		c=0;

		while(k>1) {

			if(k%2==0) {
				k=k/2;
				cnt=cnt+1;
			}

			else if(k%3==0) {
				k=k/3;
				c=c+1;
			}

			else break;

		}


		if(k==1) {

			if(cnt>c) {
				cout<<-1<<endl;
				continue;
			}
			else if(cnt<=c) {
				cout<<(c-cnt)+c<<endl;
				continue;
			}
		}
		else if( k!=1) {
			cout<<-1<<endl;
		}

	}
	return 0;
}