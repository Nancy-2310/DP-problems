#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() {
    ll t; cin >> t;
 
    while(t--) {
        ll x, y;
        cin >> x >> y;
        
        if(y > x)
            if(y&1)
                cout << y * y + 1 - x << endl;
            else 
                cout << (y-1) * (y-1) + x << endl;
        else 
            if(x&1)
                cout << (x-1) * (x-1) + y << endl;
            else 
                cout << x * x + 1 - y << endl;
    }
    

    return 0;
}
