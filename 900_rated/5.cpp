#include <bits/stdc++.h>

using namespace std;



int main(){



int t;

cin>>t;

// int a, b, x1, y1, x2, y2;

long long int a,b,n,ans;



while(t--){
    
    cin>>n;
   //ans=b;
   vector<int> a(n);
for(int i=0;i<n;i++){
    cin>>a[i];

}



if(n%2==0){
cout<<2<<endl;
cout<<1<<" "<<n<<endl;
cout<<1<<" "<<n<<endl;
}

else if(n%2==1){
cout<<4<<endl;
cout<<1<<" "<<n-1<<endl;
cout<<1<<" "<<n-1<<endl;
cout<<n-1<<" "<<n<<endl;
cout<<n-1<<" "<<n<<endl;
}


}
return 0;


}
