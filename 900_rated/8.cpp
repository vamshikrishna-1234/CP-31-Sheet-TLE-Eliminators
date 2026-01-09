#include <bits/stdc++.h>

using namespace std;



int main(){



int t,n,k;

cin>>t;
int count;
string s;
int max_count;




while(t--){
    
    //cin>>n>>k;
   cin>>n;
   cin>>s;
//   vector<int> a(n);
// for(int i=0;i<n;i++){
//     cin>>a[i];

// }

count=0;
max_count=0;
//sort(a.begin(),a.end());
for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        count=count+1;
        max_count=max(max_count,count);
    }
    else if (s[i]!=s[i+1]){
        count=0;
    }

}

cout<<max_count+2<<endl;
}
return 0;


}
