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
    ll maximum=INT_MIN;
    ll curr=0;
        for(ll i=0; i < n; i++){
            curr += v[i];
            maximum = max(curr,maximum);
            if(curr<0) curr=0;
        }
    cout << maximum;
    return 0;
}
