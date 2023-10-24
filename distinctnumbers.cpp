#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() {
    ll n;
    cin >> n;
    vector<ll> v(n+1);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    ll num = 0; 
    sort(v.begin(), v.end());
    for (int j = 0; j < n; j++) { 
        if (j == 0 || v[j] != v[j + 1]) num++;
    }
    cout << num;
    return 0;
}
