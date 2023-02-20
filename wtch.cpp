#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >>n;
  string a;
  cin >> a;
  int no_o=0;


  int count = 0 ;
  if(a[0] == '0' && a[1] =='0'){
    count++;
    a[0] = '1';
  }
  for(int i =1; i<n-1; i++){
    if(a[i]=='0' && a[i-1]=='0' && a[i+1]=='0' ) {
      count++;
      a[i]='1';
    }
  }
  if(a[n-1] =='0' && a[n-2] == '0') {
    count++;
    a[n-1] = '1';
  }
  if(n==1 && a[0] == '0')count=1;

  cout << count << endl;
}

int main(){
  int tc;
  cin >> tc;
  while(tc--) solve();
}
