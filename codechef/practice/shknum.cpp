#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> a){
  int n ;
  cin >> n;
  int mini = INT_MAX;
  int x =0;
  for(auto m:a){
    x = abs(m-n);
    mini = min(x,mini);
  }
  cout << mini << endl;
}

int main(){
  int i=1;
  vector<int>a;
  do{
    for(int i=0; i<32; i++){
      for(int j=0; j<32;j++){
        if(i!=j) a.push_back(pow(2,i)+pow(2,j));
      }
    }
    i--;
  }while(i==1);

  int tc;
  cin >> tc;
  while(tc--) solve(a);
}
