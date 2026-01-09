#include <bits/stdc++.h>

using namespace std;



int main(){



int t,n,k;

cin>>t;
int count;
// int a, b, x1, y1, x2, y2;
int max_count;
///long long int a,b,n,ans;



while(t--){
    
    cin>>n>>k;
   //ans=b;
   vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];

}

count=1;
max_count=1;
sort(a.begin(),a.end());
for(int i=0;i<n-1;i++){
    if(abs(a[i]-a[i+1])<=k){
        count=count+1;
        max_count=max(max_count,count);
    }
    else if (abs(a[i]-a[i+1])>k){
        count=1;
        //max_count=max(max_count,count);
    }

}

cout<<n-max_count<<endl;
}
return 0;


}
