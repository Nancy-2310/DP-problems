#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() {

    ll n;
    cin >> n;

    vector<pair<ll,ll>> t(n);

    for(ll i = 0; i < n; i++){
        
        ll price;
        cin >> t[i].first >> t[i].second;
    }
    
    sort(t.begin(), t.end());

    ll ans = 0, current = 0;

    for(ll i = 0; i < n; i++){
        if(i == 0){
           current = t[i].second;
           ans++;
        }
        else{
            if(t[i].first >= current){
                current = t[i].second;
                ans++;
            }
            else{
                current = min(current, t[i].second);
            }
        }

    }
    cout << ans << endl;
    return 0;
}

