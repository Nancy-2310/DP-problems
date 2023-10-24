#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
typedef long long ll;

const int mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

vector<int> dp;
int f(ll sum, ll n, vector<ll>& v) {
 if(sum == 0) return 1;
    
 if(sum < 0) return 0;
    
if(dp[sum] != -1) return dp[sum];

int ans = 0;

for(int i = 0; i < n; i++) {
    ans = (ans%mod + f(sum-v[i], n , v)%mod) % mod;
}
    
  
  return dp[sum] = ans;
}
int main() {

    dp.clear();
    
    ll n, x;
    cin >> n >> x;
    dp.resize(x+1,-1);
    vector<ll> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << f(x,n,v);
    
    return 0;

}

