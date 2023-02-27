#include <bits/stdc++.h>
using namespace std;
/*
void check_missing(string &a,int &n){
  int o=0, c=0;
  for(int i=0; i<n;i++) {
    if(a[i] == '(') o++;
    else c++;
  }
  while(o>c){
    c++;
    a= a+')';
    n++;
  }
  while(c>o){
    o++;
    n++;
    a = a+'(';
  }
}
*/
void solve(){
  int n,ans=0;
  string a;
  cin >> n;
  cin >> a;

  //if(n%2!=0) check_missing(a,n);

  string b = a ;
  sort(a.begin() , a.end());

  for(int i=0; i<n; i++){
    if(a[i] != b[i]) ans++;
  }
  cout << ans << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
