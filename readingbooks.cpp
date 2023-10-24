#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;



int main() 
{   
    ll n, sum = 0;
    ll mx = INT_MIN;
    cin >> n;
    
    vector<ll> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
        mx = max(mx , v[i]);
        sum += v[i];
    }
    
    sum -= mx;

    if(sum > mx) cout << sum+mx;
    else cout << mx*2;

    return 0;

}
