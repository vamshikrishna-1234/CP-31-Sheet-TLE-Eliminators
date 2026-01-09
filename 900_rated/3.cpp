#include <bits/stdc++.h>

using namespace std;



int main(){



int t;

cin>>t;

// int a, b, x1, y1, x2, y2;

long long int n,k,x, l,h=0;



while(t--){
    
    cin>>n>>k>>x;
    //cout<<n<<k<<x<<endl;
    l=k*(2*1+(k-1));
    h=k*(2*(n-k+1)+(k-1));
    //cout<<l<<" "<<h<<endl;
    if(x<l/2 || x>h/2){
        cout<<"NO"<<endl;
    }
    else if(x>=l/2 && x<=h/2){
        cout<<"YES"<<endl;
        
    }
    

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