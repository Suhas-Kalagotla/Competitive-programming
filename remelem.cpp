#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n,k;
  cin >> n >> k;
  int a[n];
  for(int i=0; i<n; i++) cin >> a[i];

  if(n==1) {cout <<
    "Yes\n";
    return;
  }
  int min =a[0], max=a[0];
  for(int i=0; i<n; i++){
    min = (min > a[i]) ? a[i]: min ;
    max = (max > a[i]) ? max : a[i];
  }

  if(max+min <= k) cout << "yes\n";
  else cout << "no\n";
}; 

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
