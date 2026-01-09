#include <bits/stdc++.h>

using namespace std;



int main(){



int t;

cin>>t;

// int a, b, x1, y1, x2, y2;

long long int a,b,n,ans;



while(t--){
    
    cin>>a>>b>>n;
   ans=b;
   vector<int> c(n);
for(int i=0;i<n;i++){
    cin>>c[i];
    if(c[i]<a-1){
        ans=ans+c[i];
    }
    else if(c[i]>=a-1){
        ans=ans+a-1;
    }
}
cout<<ans<<endl;
}
return 0;





}
// YES
// NO
// YES
// YES
// NO
// NO
// YES
// NO
// NO
// NO
// YES
// YES