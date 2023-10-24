#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

vector<int> dp;

int f(int n, int k, vector<int> v){
    dp.resize(100005, INT_MAX);
    dp[n-1] = 0;

    for(int i = n-2; i>=0 ; i--){
        for(int j = 1; j <= k; j++){

            if(i+j >= v.size()) break;
            dp[i] = min(dp[i] ,( abs(v[i] - v[i + j])+ dp [i+j]));
        }
    }

    return dp[0];
}

int main() {

    int n,k;
    cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    cout << f(n,k,v) << endl;

    return 0;
}

