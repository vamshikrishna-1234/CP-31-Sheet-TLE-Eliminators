#include <bits/stdc++.h>

using namespace std;


int main(){



int t,n,q,l,r,k;
int mini;
cin>>t;
int count,ans;
string s;
int max_count;
int v;
//bool q;
while(t--){
    
    //q=true;
    //ans=0;
    cin>>n;
   //set<int> s;
  vector<int> a(n);
  count=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){
        a[i]=a[i]+1;
        count=count+1;
    }
 }


for (int i=0;i<n-1;i++){
    while(a[i+1]%a[i]==0 && count<=2*n){
        a[i+1]=a[i+1]+1;
        count=count+1;
     }
   }



for(auto i:a){
    cout<<i<<" ";
 }
cout<<endl;
}

return 0;


}
