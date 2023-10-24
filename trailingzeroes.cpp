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
    
    ll k = 1;
    ll ans = 0;
    while(n/pow(5,k) != 0){
        ans += n/pow(5,k);
        k++;
    }

    cout << ans;
    return 0;
}

