#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++) cin >> a[i];
  int f=0,s=0;

  sort(a,a+n);

  for(int i=0; i<n; i++){
    if(f<s) f+= a[i];
    else s+= a[i];
  }

  int ans = (f<s) ? s : f;

  cout << ans << endl;
}
int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
