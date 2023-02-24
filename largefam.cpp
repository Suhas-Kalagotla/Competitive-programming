#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++) cin >> a[i];
  sort(a,a+n);
  int ans =0;
  int t=0;

  for(int i=0; i<n; i++){
    t+=a[i];
    if(t >= n) break;
    ans++;
  }
  cout << ans << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
