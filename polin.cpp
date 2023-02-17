#include <bits/stdc++.h>
using namespace std;
#define ll long long

int rem_rep(int a[], int n){
  int j=0;
  sort(a,a+n);
// 2 3 2 3 4
// 2 2 3 3 4  ( after sorting)
// 2 3 4 3 4
  for(int i=0; i<n-1; i++){
    if(a[i] != a[i+1]) a[j++] = a[i] ;
  }
  a[j++] = a[n-1];
  return j;
}

void solve(){
  int n;
  cin >> n;
  int k = n;
  int x[n] = {0} , y[n] = {0} ;

  int i=0;
  while(k--) cin >> x[i] >> y[i++];

  int a = rem_rep(x,n);
  int b = rem_rep(y,n);

  cout << a + b << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
