#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() {

    ll n, m;
    cin >> n >> m;

    multiset<ll> price_of_ticket;
    for(ll i = 0; i < n; i++){
        
        ll price;
        cin >> price;
        price_of_ticket.insert(price);
    }
    for(ll i = 0; i < m; i++){

        ll price_paid;
        cin >> price_paid;

        auto it = price_of_ticket.upper_bound(price_paid);
        if(it == price_of_ticket.begin()){
            cout << -1 << endl;
            continue;
        }
        else{
            cout << *(--it) << endl;
            price_of_ticket.erase(it);
        }
    }
    return 0;
}

