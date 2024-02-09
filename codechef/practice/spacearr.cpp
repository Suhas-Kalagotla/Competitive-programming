#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
  int n;
  cin >> n;
  int a[n],p[n];
  for(int i=0; i<n; i++) cin >> a[i];
  for(int i=0;i<n;i++) p[i] = i+1;
  int count =0;
  sort(a,a+n);
  int f=1;
  for(int i=0; i<n; i++){
    if(a[i]<=p[i]){
      count += abs(a[i]-p[i]);
    }
    else {
      f=0;
      break;
    }
  }
  if(f)
    count %2 ==0 ? cout << "Second\n" : cout << "First\n";
  else  cout <<"Second\n";

}
int main(){
  ll tc;
  cin >> tc;
  while(tc--) solve();
}
