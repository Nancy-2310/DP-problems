#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<vector<int>> dp(n, vector<int>(m + 1, 0));

    for (int j = 1; j <= m; j++) {
        if (a[0] == 0 || a[0] == j) {
            dp[0][j] = 1;
        }
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i] == 0 || a[i] == j) {
                dp[i][j] = dp[i - 1][j];
                if (j > 1) dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;
                if (j < m) dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MOD;
            }
        }
    }

    int ways = 0;
    for (int j = 1; j <= m; j++) {
        ways = (ways + dp[n - 1][j]) % MOD;
    }

    cout << ways << endl;

    return 0;
}
