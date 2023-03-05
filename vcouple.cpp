#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  ll b[n],g[n]; ;
  for(int i=0; i<n; i++) cin >> b[i];
  for(int i=0; i<n; i++) cin >> g[i];

  sort(b,b+n);
  sort(g,g+n,greater<ll>());
  int ans =0;
  for(int i=0; i<n; i++){
    int val = b[i] + g[i];
    ans = max(ans,val);
  }
  cout << ans << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
