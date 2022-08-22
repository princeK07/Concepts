/*
  Time Complexity: O(sqrt(n))
*/

#include<bits/stdc++.h>
using namespace std;

#define nl "\n"

vector<long long> primeFractorization(long long n){
  vector<long long> fractorization;
  
  for(int i=2; i*i<=n; i++){
    while(n%2==0){
      fractorization.push_back(i);
      n/=i;
    }
  }

  if(n>1)
    fractorization.push_back(n);

  return fractorization;
}

void solve(){
  int n;
  cin>>n;

  vector<long long> ans = primeFractorization(n);
}

int main() {

  ios_base::sync_with_stdio(false);
  cout.tie(NULL);

  int t=1; 
  // cin>>t;
  while(t--){
    solve();
    cout<<nl;
  }

  return 0;
}
