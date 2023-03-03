#include <bits/stdc++.h>
#define ll long long
using namespace std;

int spf(int n){
  if(n%2==0) return 2;

  for(int i=3;i*i<=n;i+=2){
    if(n%i==0) return i;
  }
  return n;
}

void solve(){
  int x, y;
  cin >>  x >> y;
  int ans =0;

  while(x<y){
    if(x%2!=0) x += spf(x);
    else break;
    ans++;
  }
  ans += abs((y-x+1)/2);
  cout <<ans <<endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
