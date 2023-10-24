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
    
    ll total_ways;
    ll canattack;
    for(ll i = 1; i <= n; i++){
       total_ways = ((i*i)*((i*i) - 1))/2;
       canattack = 4*(i-1)*(i-2);
       cout << total_ways - canattack;
       cout << endl;
    }

    return 0;
}
