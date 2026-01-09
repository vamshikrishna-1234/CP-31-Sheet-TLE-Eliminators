#include <bits/stdc++.h>
using namespace std;
long long t,b,k,temp,temp2,ans;

long long xor_upto(long long n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
	cin>>t;
	while(t--) {
		cin>>k>>b;
		vector<long long>a;
		temp=0;
		temp2=0;
        
		
		temp=xor_upto(k-1);
		
		temp2=temp^b;
		
		if(temp==b) {
			cout<<k<<endl;
			continue;
		}
		
		else if(temp2==k) {
			cout<<k+2<<endl;
			continue;
		}
		
		else {
			cout<<k+1<<endl;
			continue;
		}
		
// 		else {
// 			if(temp2>k) {
// 				cout<<k+1<<endl;
// 				continue;
// 			}
// 			else if(temp2==k) {
// 				cout<<k+2<<endl;
// 				continue;
// 			}
// 			else if(temp2<k) {
// 				cout<<k+1<<endl;
// 				continue;
// 			}

	}
	return 0;
}
