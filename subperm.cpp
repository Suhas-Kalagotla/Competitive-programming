#include <iostream>
using namespace std;

void solve(){
  int n, k;
  cin >> n >> k;
  if(n!=1 && k ==1) cout << -1<< endl;
  else{
    for(int i=1; i<k ; i++)
      cout << i << " ";
    for(int i =n ; i>=k ; i--)
      cout << i << " ";
  }
  cout << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
