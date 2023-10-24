#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int fbu(vector<int>& price, vector<int>& pages, int x) {
    int n = price.size();
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= x; j++) {
            dp[i][j] = dp[i - 1][j];
            if (price[i - 1] <= j) {
                dp[i][j] = max(dp[i][j], pages[i - 1] + dp[i - 1][j - price[i - 1]]); 
            }
        }
    }

    return dp[n][x];
}

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

    cout << fbu(price, pages, x);

    return 0;
}