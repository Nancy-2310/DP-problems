#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;


int main() {
    ll n , w;
    cin >> n >> w;
    vector<ll>wt(n);
    
    for(int i = 0; i < n; i++){
        cin >> wt[i];
    }
    
    sort(wt.begin(), wt.end());

    ll ans = 0;
    int s = 0, e = n - 1;

    while(s <= e){
        if((wt[s] + wt[e]) <= w){
            ans++;
            s++;
            e--;
        }
        else {
            ans++;
            e--;
        }
    }
    cout << ans ;

    return 0;
}
