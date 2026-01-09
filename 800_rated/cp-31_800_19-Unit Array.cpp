#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

  int t;
  cin>>t
  int n;
  int count;
  int cnt;
  int ans;
  while(t--){
   cin>>n;
   count=0;
   cnt=0;
   ans=0;
   vector<int> arr(n);
    for(int i=0;i<n;i++){
     cin>>arr[i];
     if(arr[i]==1){
       count++;
     }
     else if(arr[i]==-1){
       cnt++;
     }
    }
    
    if(count>=cnt && (count-cnt)%2==0){
        cout<<0<<endl;
        continue;
    }
    while(count<cnt || (count-cnt)%2!=0){
          count=count+1;
          cnt=cnt-1;
          ans=ans+1;
    }

    cout<<ans<<endl;





  }



return 0;
}