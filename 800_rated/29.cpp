#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
int n,k;
string s;
int ans;
while(t--){
cin>>n;
vector<int> a(n);
ans=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(i!=0){
       if(a[i]%2==a[i-1]%2){
           ans=ans+1;
       } 
    }
}


cout<<ans<<endl;


}

return 0;


}