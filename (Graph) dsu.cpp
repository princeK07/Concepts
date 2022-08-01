#include<bits/stdc++.h>
using namespace std;

#define nl "\n"

const int N = 1e5+10;

void make(int v){
  parent[v]=v;
  size[v]=1;
}

int find(int v){
  if(parent[v]==v) return v;
  parent[v]=find(parent[v]);

  return parent[v];
}

void Union(int a, int b){
  a = find(a);
  b = find(b);

  if(size[a] < size[b]) swap(a, b);

  parent[b]=a;
  size[a]+=size[b];

}

void solve(){
  
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
