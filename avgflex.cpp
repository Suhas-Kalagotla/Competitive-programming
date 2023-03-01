#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++) cin >> a[i];
  int ans=0;
  for(int i=0; i<n; i++){
    int less =0, great=0;
    for(int j=0;j<n; j++){
      if(a[i] >= a[j]) great++;
      else less++;
    }
    if(great>less) ans++;
  }
  cout << ans << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
