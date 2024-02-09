#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
  ll n;
  cin >> n;
  ll a[n];
  map<int,int>freq;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    freq[a[i]]++;
  }

  ll modulo = 1000000000+7;
  ll x=0;
  ll count=1;

  for(int i=1; i<=n; i++){
    count *= freq[i];
    x += count;
    x%= modulo;
    count %= modulo;
  }
  cout << x << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
