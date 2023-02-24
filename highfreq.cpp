#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n];
  vector<int> freq(n+1,0);
  for(int i=0; i<n; i++) {
    cin >> a[i];
    freq[a[i]]++;
  }
  sort(freq.begin(),freq.end());

  int ans = freq[n-1];

  int k = ceil((float) freq[n] /2 );
  if(k>freq[n-1]) cout << k << endl;
  else cout << ans << "" <<endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
