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
    cin>>n>>q;
   //set<int> s;
  vector<int> a(n);
  
for(int i=0;i<n;i++){
    cin>>v;
    a[i]=v%2;
}

vector<int>p(n);
p[0]=a[0];
for(int i=1;i<n;i++){
    p[i]=p[i-1]+a[i];
}

// for(auto i:p){
//     cout<<i;
// }
// cout<<endl;

ans=*p.rbegin();

while(q--){
    cin>>l>>r>>k;
    if(l==1){
       if(k%2){
    if(ans%2==0 && abs((p[r-1])-(r-l)-1)%2==1){
        cout<<"yes"<<endl;
        continue;
    }
    else if(ans%2==0 && abs((p[r-1]-0)-(r-l)-1)%2==0){
        //cout<<abs((p[r-1]-p[l-2])-(r-l)-1);
        cout<<"no"<<endl;
        continue;
    }
    else if(ans%2==1 && abs((p[r-1]-0)-(r-l)-1)%2==0){
        cout<<"Yes"<<endl;
        continue;
    }
    else if(ans%2==1 && abs((p[r-1]-0)-(r-l)-1)%2==1){
        cout<<"No"<<endl;
        continue;
    }
    
    
    
    }
    else if (k%2==0){
      if(ans%2==0 && abs(p[r-1]-0)%2==1){
        cout<<"YEs"<<endl;
        continue;
    }
    else if(ans%2==0 && abs(p[r-1]-0)%2==0){
        cout<<"NO"<<endl;
        continue;
    }
    else if(ans%2==1 && abs(p[r-1]-0)%2==0){
        cout<<"YES"<<endl;
        continue;
    }
    else if(ans%2==1 && abs(p[r-1]-0)%2==1){
        cout<<"NO"<<endl;
        continue;
    }   
    } 
    }
    
    //////
    if(k%2){
    if(ans%2==0 && abs((p[r-1]-p[max(l-2,0)])-(r-l)-1)%2==1){
        cout<<"yes"<<endl;
        continue;
    }
    else if(ans%2==0 && abs((p[r-1]-p[max(l-2,0)])-(r-l)-1)%2==0){
        //cout<<abs((p[r-1]-p[l-2])-(r-l)-1);
        cout<<"no"<<endl;
        continue;
    }
    else if(ans%2==1 && abs((p[r-1]-p[max(l-2,0)])-(r-l)-1)%2==0){
        cout<<"Yes"<<endl;
        continue;
    }
    else if(ans%2==1 && abs((p[r-1]-p[max(l-2,0)])-(r-l)-1)%2==1){
        cout<<"No"<<endl;
        continue;
    }
    
    
    
    }
    else if (k%2==0){
      if(ans%2==0 && abs(p[r-1]-p[max(l-2,0)])%2==1){
        cout<<"YEs"<<endl;
        continue;
    }
    else if(ans%2==0 && abs(p[r-1]-p[max(l-2,0)])%2==0){
        cout<<"NO"<<endl;
        continue;
    }
    else if(ans%2==1 && abs(p[r-1]-p[max(l-2,0)])%2==0){
        cout<<"YES"<<endl;
        continue;
    }
    else if(ans%2==1 && abs(p[r-1]-p[max(l-2,0)])%2==1){
        cout<<"NO"<<endl;
        continue;
    }   
    }
}

}

return 0;


}
