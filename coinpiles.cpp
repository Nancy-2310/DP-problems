#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin >> t;

    ll a, b;
    while(t--){
        cin >> a >> b;
        if((a + b) % 3 == 0 && a <= 2*b && b <= 2*a ) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}

