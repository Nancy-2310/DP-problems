#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;
vector<int> coins;
vector<int> dp;

int f(ll x) {
    if (x == 0) return 0;
    if (dp[x] != -1) return dp[x];
    int result = INT_MAX;
    for (int i = 0; i < coins.size(); i++) {
        if ((x - coins[i]) < 0) continue;
        int subproblem = f(x - coins[i]);
        if ( subproblem != INT_MAX) {
            result = min(result, subproblem + 1);
        }
    }
    return dp[x] = (result == INT_MAX) ? INT_MAX : result;
}

int main() {
    dp.clear();
    ll n, x;
    cin >> n >> x;
    dp.resize(x + 1, -1);
    int coin;
    coins.clear();
    for (int i = 0; i < n; i++) {
        cin >> coin;
        coins.push_back(coin);
    }
    int result = f(x);
    if (result == INT_MAX)
        cout << "-1"; 
    else
        cout << result;
    return 0;
}
