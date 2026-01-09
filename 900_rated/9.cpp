#include <bits/stdc++.h>

using namespace std;


int main(){



int t,n,k;
int mini;
cin>>t;
int count,ans;
string s;
int max_count;

bool q;
while(t--){
    
    q=true;
    ans=0;
    cin>>n;
   set<int> s;
  vector<int> a(n);
  
for(int i=0;i<n;i++){
    cin>>a[i];
    s.insert(abs(a[i]-(i+1)));
}

if(*s.begin()!=0){
mini=*s.begin();
}
else mini=*(++s.begin());

for(int i=mini;i>=1;i--){
    q=true;
    //cout<<i<<"m"<<endl;
    for(auto j:s){
        if(j%i!=0){
            q=false;
            //cout<<"this"<<j <<" "<<i<<q<<endl;
            break;
        }

    }
    if(q==true){
        //cout<<"here"<<i;
         ans=i; 
         break;
    }
}

//sort(a.begin(),a.end());
// for(auto i:s){
// cout<<i;}
// cout<<endl;
cout<<ans<<endl;
s.clear();

}

return 0;


}
