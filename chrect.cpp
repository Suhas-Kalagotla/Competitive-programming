#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n,m , k;
  cin >> n >> m >> k;

  if(n==1 && m<=2 || m==1 && n<=2) cout << 0<<endl;
  else if(n==1 || m==1) cout << k << endl;
  else {
    int count=0;
    for(int i=1; i<=k; i+=2)count++;
    cout << count << endl;
  }
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
