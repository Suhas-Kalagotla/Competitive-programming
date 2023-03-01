#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  cin >> s;

  char first =s[0], last = s[s.length()-1];
  int ans=0,max=0;
  for(int i=0; i<s.length(); i++){
    if(s[i] == first || s[i] == last) {
      max = max < ans ? ans : max ;
      ans =0;
    }
    else ans++;
  }
  if(max==0) cout << -1 << endl;
  else cout << max << endl;


}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
