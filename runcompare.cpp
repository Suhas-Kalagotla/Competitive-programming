#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n],b[n];
  for(int i=0; i<n; i++) cin >> a[i];
  for(int i=0; i<n; i++) cin >> b[i];
  int count =0;

  for(int i=0; i<n; i++){
    int k = abs(a[i] - b[i]);
    int m = min(a[i],b[i]);
    if(k>m);
    else count++;
  }
  cout << count << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
