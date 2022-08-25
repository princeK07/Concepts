/*
  Time Complexity: O(sqrt(n))

  Input: 
        T-> Test cases
        n-> phi(n)
        
  Output:
        Print phi(n)
*/


#include<bits/stdc++.h>
using namespace std;

#define nl "\n"

void solve(){
  int n;
  cin>>n;

  int res=n;
  
  for(int i=2; i*i<=n; i++){
    if(n%i==0){
      while(n%i==0){
        n/=i;
      }
      res-=res/i;
    }
  }

  if(n>1) res-=res/n;
    cout<<res;
}

int main() {

  ios_base::sync_with_stdio(false);
  cout.tie(NULL);

  int t=1; 
  cin>>t;
  while(t--){
    solve();
    cout<<nl;
  }

  return 0;
}
