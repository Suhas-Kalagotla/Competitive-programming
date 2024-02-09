#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n,ans=0;
  string s;
  cin >> n;
  cin >> s;

  int i=0, j= n-1 ;

  while(i <=j ){
    while(s[i] != '(' && i<=j ){
      i++;
      ans++;
    }
    while(s[i] == '(' && s[j]!=')' && i<=j ){
      j--;
      ans++;
    }
    i++;
    j--;
  }

  cout << ans << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
