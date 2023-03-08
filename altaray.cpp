#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
  int n;
  cin >> n;
  ll a[n];
  for(int i=0; i<n; i++) cin >> a[i];

  int x[100000] = {0};
  x[n-1]=1;
  for(int i=n-2; i>=0; i--){
    if(a[i] * a[i+1] <=0) x[i]=x[i+1]+1;
    else x[i] =1;
  }
  for(int i=0; i<n; i++) {
    cout << x[i] << " ";
  }cout << endl;
}

int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
