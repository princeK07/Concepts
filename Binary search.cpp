#include<bits/stdc++.h>
using namespace std;

#define nl "\n"

void solve(){
  int n; 
  cin>>n;

  vector<int> v(n);

  for(int i=0; i<n; i++) 
    cin>>v[i];

  sort(v.begin(), v.end());

  int key; cin>>key;

  int lo=0, hi=n-1;

  while(hi-lo>1){
    int mid = (hi+lo)/2; // "lo + (hi-lo)/2", will not overflow
    if(v[mid]<key) lo=mid+1;
    else hi=mid;
  }

  if(v[lo]==key) cout<<lo;
  else if(v[hi]==key) cout<<hi; 
  else cout<<"-1";

  cout<<nl;
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
