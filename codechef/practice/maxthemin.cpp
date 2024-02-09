#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n, k ;
  cin >> n >> k;
  int a[n];
  for(int i=0; i<n; i++) cin >> a[i];

  sort(a,a+n);

  int z = (k>n-1) ? n-1 : k ;

  cout << a[z] << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
