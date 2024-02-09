#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n,k;
  cin >> n >> k;
  int a[n];
  unordered_map <int,int> m;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    m[a[i]] = 1;
  }
  int ans ;
  for(int i=0; i<=2*10000000; i++){
    if(m.find(i)==m.end()&& k==0) {
      ans =i;
      break;
    }else if(m.find(i)==m.end()) k--;
  }
  cout << ans <<endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
