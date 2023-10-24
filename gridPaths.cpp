#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() {
    int n;
    cin >> n;
    bool grid[n+1][n+1];

    char ch;
    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            cin >> ch;
            if(ch=='.') grid[i][j] = 0;
            else grid[i][j] = 1;
        }
    }
    if(grid[n][n]) {
        cout << 0;
        return 0;
    }
    int dp[n+1][n+1];
    for(int i = n; i >=1; i--){
        for(int j = n; j >= 1; j--){
            if(grid[i][j]) dp[i][j] = 0;
            else  if(i == n && j == n) dp[i][j] = 1;
            else{
                int x1 = (j == n) ? 0 : dp[i][j+1];
                int x2 = (i == n) ? 0 : dp[i+1][j];
                dp[i][j] = (x1 + x2)%MOD;
            }
            
        }
    }
    cout << dp[1][1];
    return 0;
}