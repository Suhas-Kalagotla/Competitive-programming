#include <bits/stdc++.h>
using namespace std;

int main(){
  int n , q;
  cin >> n >> q;
  int a[n][n] ={0,0};
  while(q--) {
    string s;
    cin >> s;
    int k,v;
    cin >> k >> v;
    char c=s[0];
    if(c=='R'){
      for(int i=0; i<n;i++) a[k-1][i] += v;
    } else{
      for(int i=0; i<n;i++) a[i][k-1] += v;
    }
  };
  int max =0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(a[i][j]>max) max=a[i][j];
    }
  }
  cout << max << endl;

}
