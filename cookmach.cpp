#include <bits/stdc++.h>
using namespace std;

bool is(int n){
  int k = log(n) / log(2);
  int sum =1 ;
  for(int i=1; i<=k;i++) sum*=2;
  if(sum == n) return true;
  return false;
}

void solve(){
  int count =0;
  int n,k;
  cin >> n >> k;

  while(!is(n)){
    if(n==1) break;
    if(n%2!=0) {
      n = (n-1) / 2;
      count ++;
    }else{
      n = n/2;
      count ++;
    }
  }

  while(n>k){
    n= n/2;
    count++;
    if(n==k) break;
  }
  while(n<k){
    n= n*2;
    count++;
    if(n==k) break;
  }
  cout << count << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
