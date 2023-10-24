#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;
 
signed main() {
 
    ios::sync_with_stdio(false);
    cin.tie();
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
 
    int t;
    cin >> t;
 
    map<int, int> check;
 
    int  a, b;
    while(t--) {
        cin >> a >> b;
        check[a] += 1;
        check[b] -= 1;
    }
 
    int prev = -1;
    int ans = 1;
    for(auto &i: check) {
        if(prev == -1) {
            prev = i.first;
            continue;
        }
        else {
            i.second += check[prev];
            ans = max(i.second, ans);
        }
        prev = i.first;
    }
 
    cout << ans << endl;
 
    return 0;
}