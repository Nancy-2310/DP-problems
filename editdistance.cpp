#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

vector<vector<int>> dp;

int solve(string& s1, string& s2, int i ,int j){
    if(i == (int)s1.length()){
        return s2.length() - j;
    }
    if(j == (int)s2.length()){
        return s1.length() - i;
    }
    if(dp[i][j] != -1) return dp[i][j];

    if(s1[i] == s2[j]){
        return dp[i][j] = solve(s1, s2, i+1, j+1);
    }
    else {
        int insert = 1 + solve(s1, s2, i , j+1);

        int remove = 1 + solve(s1 ,s2, i + 1, j);

        int replace = 1 + solve(s1 , s2, i+1, j+1);

        return dp[i][j] =  min(insert , min(remove , replace));
    }
}
int main() {
    
    string s1,s2;
    cin >> s1 >> s2;
    dp.resize(5005, vector<int>(5005, -1));
    cout << solve(s1 , s2, 0, 0);
}
