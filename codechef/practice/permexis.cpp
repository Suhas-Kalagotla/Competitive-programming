#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++) cin >> a[i];
  sort(a,a+n);
  int f = 1;

  for(int i=1; i<n; i++) {
    int dif = a[i-1] - a[i];
    if(dif == 0 || abs(dif) == 1) ;
    else {
      f = 0 ;
      break;
    }
  }

  if(f) cout << "YES\n";
  else cout << "NO\n";
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
