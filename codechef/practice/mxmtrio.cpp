#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
  int n;
  cin >> n;
  ll a[n];
  for(int i=0; i<n; i++) cin >> a[i];

  sort(a,a+n);

  cout << (a[n-1]- a[0]) * a[n-2] << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
