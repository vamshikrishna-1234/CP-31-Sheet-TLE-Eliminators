#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
int n,k;
string s;
int ans;
while(t--){
cin>>n>>k;
cin>>s;
ans=0;
map<char, int> p;
for(auto i:s){
    p[i]=p[i]+1;
}
for(auto j:p){
    if(j.second%2){
      ans=ans+1;  
    }
}
if(ans==1){
    cout<<"YES"<<endl;
    continue;
}
// if(ans==2){
     
// }
if( ans-1<=k){
    cout<<"YEs"<<endl;
}
else if( ans-1>k){
    cout<<"No"<<endl;
}





}

return 0;


}