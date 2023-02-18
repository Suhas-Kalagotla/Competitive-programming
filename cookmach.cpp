#include <bits/stdc++.h>
using namespace std;

int even_mul(int a){
  cout << "em";
  return 2*a;
}

int even(int a){
  cout << "e" ;
  return a/2;
}

int odd(int a) {
  cout << "o";
  return (a-1)/2;
}
void solve(){
  int count =0;
  int n,k;
  cin >> n >> k;
  if(n==k) {
    cout << "0" << endl;
    return ;
  }
while(n<k && n > 0){
  if(n%2==0) {
    if(k%n==0) {
      n = even_mul(n);
      count++;
    }
    else {
      n = even(n);
      count++;
    }
  }else {
    n = odd(n);
    count++ ;
  }
}
  cout << count << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
