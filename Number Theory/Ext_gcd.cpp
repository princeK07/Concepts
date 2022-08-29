#include<bits/stdc++.h>
using namespace std;

#define nl "\n"

int egcd(int a, int b, int& x, int& y){
  if(b==0){
    x=1;
    y=0;
    return a;
  }

  int x1, y1;
  int g = egcd(b, a%b, x1, y1);

  x=y1;
  y=x1-y1*(a/b);

  return g;
}

void solve(){
  int a, b, x, y;
  cin>>a>>b;

  int g = egcd(a, b, x, y);
  cout<<g<<" "<<x<<" "<<y;
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
