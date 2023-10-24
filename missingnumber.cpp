#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() 
{
    ll n;
    cin >> n;
    ll num;
    ll sum = (n*(n+1))/2;
    ll sum2 = 0;
    for(ll i = 0; i < n-1; i++){
        cin >> num;
        sum2 += num;
    }
    
    ll ans = sum - sum2;
    cout << ans;
    return 0;
}

