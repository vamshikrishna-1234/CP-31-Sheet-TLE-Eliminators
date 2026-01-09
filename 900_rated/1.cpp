#include <bits/stdc++.h>

using namespace std;



int main(){



int t;

cin>>t;

int a, b, x1, y1, x2, y2;

int ans;

while(t--){

  cin>>a>>b;

  cin>>x1>>y1;

  cin>>x2>>y2;

   

  ans=0;

   

  multimap<int,int> p;

  multimap<int,int> q;

   

  p.emplace(x1 + a, y1 + b);

  p.emplace(x1 - a, y1 + b);

  p.emplace(x1 + a, y1 - b);

  p.emplace(x1 - a, y1 - b);



  p.emplace(x1 + b, y1 + a);

  p.emplace(x1 - b, y1 + a);

  p.emplace(x1 + b, y1 - a);

  p.emplace(x1 - b, y1 - a);

   

  q.emplace(x2 + a, y2 + b);

  q.emplace(x2 - a, y2 + b);

  q.emplace(x2 + a, y2 - b);

  q.emplace(x2 - a, y2 - b);



  q.emplace(x2 + b, y2 + a);

  q.emplace(x2 - b, y2 + a);

  q.emplace(x2 + b, y2 - a);

  q.emplace(x2 - b, y2 - a);

   

  for(auto i:p){

    //cout<<i.first<<" "<<i.second<<endl;

    for(auto j:q){

      if(i.first==j.first && i.second==j.second){

        ans=ans+1;

      }

    }

  }

  if(a!=b){

  cout<<ans<<endl;

  }

  else cout<<ans/4<<endl;

}



return 0;





}