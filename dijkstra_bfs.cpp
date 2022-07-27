#include<bits/stdc++.h>
using namespace std;

#define inf 1e9+5
#define nl "\n"
#define pb push_back
#define ff first
#define ss second

const int N = 1e3+10;
vector<pair<int, int>> v[N];
vector<int> dis(N, inf), vis(N, 0);

void dijkstra(int u){
   
  dis[u]=0;
  
  set<pair<int, int>> s;
  s.insert({dis[u], u});

  while(!s.empty()){
    auto node = *s.begin();
    int f = node.ss;
    int wt = node.ff;

    s.erase(s.begin());

    if(vis[f]) continue;
    vis[f]=1;

    for(auto i: v[f]){
      if(dis[i.ff] > wt + i.ss){
        dis[i.ff] = wt + i.ss;
        s.insert({dis[i.ff], i.ff});
      }
    }
  }

}

void solve(){
  
  int n, m; cin>>n>>m;
  for(int i=0; i<m; i++){
    int x,y,w; cin>>x>>y>>w;
    v[x].pb({y,w});
    v[y].pb({x,w});
  }

  for(int i=0; i<n; i++){
    if(!vis[i]){
      dijkstra(i);
    }
  }

  for(int i=0; i<n; i++){
    cout<<dis[i]<<" ";
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
