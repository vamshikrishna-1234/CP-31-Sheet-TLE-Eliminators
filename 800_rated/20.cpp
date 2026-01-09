#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
int n;
int k;
int count;
int cnt;
bool possible=false;
while(t--){
   
cin>>n>>k;
//cout<<n<<" "<<k<<endl;
// vector<int> a(2);
// cnt=0;
// count=0;
// int ans=0;
// possible=false;
// for(int i=0;i<n;i++){
//      cin>>a[i];
// }

if(n%2==0){
    cout<<"YES"<<endl;
    continue;
}

if(k%2){
    cout<<"YES"<<endl;
    continue;
}
cout<<"NO"<<endl;


}
// cout<<t%1;
return 0;


}