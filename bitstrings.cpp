#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll power(ll n){
    if(n == 1) return 2;
    ll num = power(n/2) % MOD;
    if(n % 2 != 0) return num * num * 2 % MOD;
    return (num * num) % MOD;
}
int main() 
{
    ll n;
    cin >> n;
    
    ll ans = power(n);
    cout << ans % MOD;

    return 0;
}

