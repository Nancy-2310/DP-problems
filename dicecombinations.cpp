#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

vector<int> dp;
ll sum;
int fbu(ll n) {
    dp[0] = 1;
    for(ll k = 1; k <= n; k++){
        sum = 0;
        for(ll i = 1; i <= 6; i++){
            if((k - i) < 0) break;
            sum = (sum + dp[k - i]) % MOD;
        }
        dp[k] = sum;
    }
    return dp[n];
}
int main() {
    ll n;
    cin >> n;
    dp.resize(n + 1);
    cout << fbu(n);
    return 0;
}
