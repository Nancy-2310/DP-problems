#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define for_range(start, end, index) for(int index = start; index < end; index++)
#define for_each(index, start, end) for(int index = start; index < end; index++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int countWaysToPaint(int n, int m, vector<int>& preferences) {
    int dp[n + 2][m + 2];
    memset(dp, 0, sizeof dp);

    for_range(1, n, i) {
        for_range(1, m, x) {
            if (i == 1) {
                if (preferences[i] == 0 || preferences[i] == x)
                    dp[i][x] = 1;
                else
                    dp[i][x] = 0;
            } else {
                if (preferences[i] == 0 || preferences[i] == x) {
                    dp[i][x] = ((dp[i - 1][x - 1] + dp[i - 1][x]) % mod + dp[i - 1][x + 1]) % mod;
                } else
                    dp[i][x] = 0;
            }
        }
    }

    int waysToPaint = 0;
    for_range(1, m, x)
        waysToPaint = (waysToPaint + dp[n][x]) % mod;
    return waysToPaint;
}

int main() {
    fast_io;
    ll t, n, m, x, i, j, k, q;
    // cin >> t;
    t = 1;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> preferences(n + 1);
        for_range(1, n + 1, i)
            cin >> preferences[i];
        cout << countWaysToPaint(n, m, preferences);
    }
    return 0;
}
