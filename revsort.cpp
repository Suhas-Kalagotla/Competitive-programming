#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  ll n, x;
  cin >> n >> x;
  ll a[n];
  for(int i=0; i<n; i++) cin >> a[i];

  for(int i=0; i<n-1; i++){
    if(a[i] > a[i+1]) {
      if(a[i] + a[i+1] > x) {
        cout << "no\n";
        return ;
      }
    }
  }
  cout << "yes\n";
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
