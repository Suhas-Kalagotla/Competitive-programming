#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  ll n, x;
  cin >> n >> x;
  ll a[n];
  for(int i=0; i<n; i++) cin >> a[i];

    for(int j=0;j<n-1;j++){
      if(a[j] > a[j+1]) {
        if(a[j] + a[j+1] > x) {
          cout << "NO\n" ;
          return ;
        }
        else swap(a[j],a[j+1]);
      }
    }
  cout << "Yes\n" ;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
