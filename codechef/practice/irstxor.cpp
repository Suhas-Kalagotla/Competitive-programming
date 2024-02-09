#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  ll  n;
  cin >> n;
  ll x =1,a=0, b=0 ;
  while(n>0){
    ll p = n%2;
    if(p==1){
      if(n/2 > 0) b += x;
      else a +=x;
    }else {
      a += x;
      b +=x;
    }
    x=x*2;
    n/=2;
  }
  cout << a * b << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
