#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> price(n);
    vector<int> pages(n);

    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int money = 0; money <= x; money++) {
            if (money == 0 || i == 0)
                dp[i][money] = 0;
            else {
                int op1 = (i == 1) ? 0 : dp[i - 1][money];
                int op2 = (money < price[i - 1]) ? 0 : pages[i - 1] + dp[i - 1][money - price[i - 1]];
                dp[i][money] = max(op1, op2);
            }
        }
    }

    cout << dp[n][x];

    return 0;
}
