#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
#define sz(x) ((int)(x).size())
typedef long long ll;

void solve(){
  ll n;
  cin>>n;

  vector<ll> factors;

  for(ll i=1; i*i<=n; i++){
    if(n%i==0){
      factors.pb(i);

      if(n/i != i) factors.pb(n/i);
    }
  }  

  for(int i=0; i<sz(factors); i++){
    cout<<factors[i]<<" ";
  }
}

int main() {

  ios_base::sync_with_stdio(false);
  cout.tie(nullptr);

  int t=1;
  // cin>>t;
  while(t--){
    solve();
    // cout<<nl;
  }

}
