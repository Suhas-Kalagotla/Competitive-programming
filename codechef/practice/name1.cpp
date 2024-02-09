#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  string a,b;
  int n;
  cin >> a >> b>> n;
  int f=1;
  string c ="";

  for(int i=0; i<n; i++){
    string k;
    cin >> k;
    c += k;
  }
  a = a+b;

  ll p[26] ={0} , ch[26]={0};

  for(char i:a) p[i-97]++;
  for(char i:c) ch[i-97]++;

  for(int i=0; i<26; i++){
    if(ch[i]>p[i]) {
      f=0;
      break;
    }
  }

  if(f) cout << "YES\n";
  else cout << "NO\n";

}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
