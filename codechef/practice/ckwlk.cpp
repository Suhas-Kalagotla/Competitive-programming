#include <iostream>
using namespace std;
#define ll long long

void solve(){
  ll n;
  cin >> n;
  int count =0;
  while(n%10==0){
    n/=10;
    count++;
  }
  if(__builtin_popcount(n)!=1){
    cout << "No\n";
  }else{
    while(n%2==0) {
      n/=2;
      count--;
  }

  if(count>=0 && n==1) cout << "Yes\n";
  else cout <<"No\n"; 
}
}
int main(){
  ll tc;
  cin >> tc;
  while(tc--)solve();
}
