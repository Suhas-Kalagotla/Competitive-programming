  #include <bits/stdc++.h>
  #define ll long long
  using namespace std;

  void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int ans=0;
    for(int i=0; i<n; i++){
      if(a[i]==0) ans++;
    }
    ans = max(ans,n-ans);
    cout << ans << endl;
  }

  int main(){
    ll tc;
    cin >> tc;
    while(tc--) solve();
  }
