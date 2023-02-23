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

  if(ans == 0) ans = (freq[n]%2==0) ? freq[n] / 2 : (freq[n]+1) /2;

  cout << ans <<endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
