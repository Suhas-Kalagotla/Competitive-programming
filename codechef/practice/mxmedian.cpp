#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[2*n];
  for(int i=0; i<2*n; i++) cin >> a[i];

  sort(a,a+2*n);

  int m = a[n+n/2];
  cout << m << endl;
  for(int i=0; i<n; i++){
    cout << a[i] << " " << a[i+n] << " ";
  }
  cout << endl;
}

int main(){
  int tc; cin >> tc;
  while(tc--) solve();
}
