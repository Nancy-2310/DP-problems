#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
typedef long long ll;
 
const int mod = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;
 
vector<vector<int>> dp;
 
int f(vector<int>& price, vector<int>& pages, int p, int idx) {
    if (idx == price.size() || p == 0) return 0;
 
    if (dp[idx][p] != -1) return dp[idx][p];
 
    int ans = f(price, pages, p, idx + 1); 
 
    if (price[idx] <= p) {
        ans = max(ans, pages[idx] + f(price, pages, p - price[idx], idx + 1)); 
    }
 
    return dp[idx][p] = ans;
}
 
int main() {
    dp.clear();
 
    int n, x;
    cin >> n >> x;
    dp.resize(n + 1, vector<int>(x + 1, -1));
    vector<int> price(n);
    vector<int> pages(n);
 
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    cout << f(price, pages, x, 0);
 
    return 0;
}
