#include <bits/stdc++.h>
using namespace std;
long long t,ans,d,f1,f2,temp,temp2,temp3;
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (long long i = 2; i * i <= n; i += 1) {
        if (n % i == 0 )
            return false;
    }
    return true;
}

int main() {
	cin>>t;
	while(t--) {
		cin>>d;

        for(long long i=1+d;;i++){
            if (isPrime(i)==true){
                f1=i;
                break;
            }
        }
        
        for(long long i=f1+d;;i++){
            if (isPrime(i)==true){
                f2=i;
                break;
            }
        }
        
		cout<<f1*f2<<endl;
	}
	return 0;
}
