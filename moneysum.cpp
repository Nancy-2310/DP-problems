#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int moneySum(vector<int>& coins) {
    int n = coins.size();
    int maxSum = 0;
    for (int coin : coins) {
        maxSum += coin;
    }

    vector<int> dp(maxSum + 1, 0);
    dp[0] = 1;

    for (int coin : coins) {
        for (int i = maxSum; i >= coin; i--) {
            dp[i] |= dp[i - coin];
        }
    }

    int totalSums = 0;
    for (int i = 1; i <= maxSum; i++) {
        if (dp[i]) {
            totalSums++;
        }
    }

    cout << totalSums << endl;
    for (int i = 1; i <= maxSum; i++) {
        if (dp[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return totalSums;
}

int main() {
    ll n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int totalSums = moneySum(v);
    return 0;
}
