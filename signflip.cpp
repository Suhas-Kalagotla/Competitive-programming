#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
  int n, k ;
  cin >> n>> k ;
  ll a[n];
  for(int i=0; i<n; i++) cin >> a[i];

  sort(a,a+n); 
// -10 -6 -4 5 6 8  k =2
//  10 -6  k = 1
//  10 6 k =0
  for(int i=0; i<n; i++) {
    if(k > 0) a[i] = (a[i] < 0) ? a[i] * -1 : a[i];
    k--;
  }
  ll sum =0;
  for(int i=0; i<n; i++) {
    if(a[i] > 0) sum += a[i];
  }

  cout << sum << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
