#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n][n];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++) cin >> a[i][j];
  }


  int ans =0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(a[j][i]==0) {
        ans++;
        break;
      }
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(a[i][j]==0) {
        ans++;
        break;
      }
    }
  }

  if(ans>=2*n) cout << "YES\n";
  else cout << "NO\n";
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
