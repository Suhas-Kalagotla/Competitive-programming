#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  ll n,k;
  cin >> n>>k;
  ll a[n],mx=a[0], mn=a[0];
  for(int i=0; i<n; i++) {
    cin >> a[i];
    mx = max(a[i],mx);
    mn = min(a[i],mn);
  }

  if(k%2!=0){
    for(int i=0; i<n; i++) {
      a[i] = mx - a[i];
    }
  }else {
    if(k==0);
    else
      for(int i=0; i<n; i++) a[i] = a[i] - mn;
  }

  for(int i=0; i<n; i++) cout << a[i] << " ";
  cout << endl;


}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
