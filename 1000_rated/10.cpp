#include <bits/stdc++.h>
using namespace std;


long long n,t,ans,check,cnt,g;
char c;
string s;

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        cin>>c;
        cin>>s;
        
        s=s+s;
        
        ans=0;
        cnt=0;
        check=0;
        
        // for(long long i=0;i<2*n;i++){
            
        //     if(s[i]==c&&g!=-1){
        //         check=i;
        //         g=-1;
        //     }
            
        //     else if(s[i]=='g'&& check!=-1){
        //         cnt=i-check;
        //         check=-1;
        //         g=0;
        //         ans=max(cnt,ans);
        //     }
            
        
            
        // }
        
        for(long long i=2*n-1;i>=0;i--){
            if(s[i]=='g'){
                check=i;
            }
            else if (s[i]==c){
                cnt=check-i;
                ans=max(cnt,ans);
            }
        }
        
        cout<<ans<<endl;
        
        
    
        
    }
    return 0;
}