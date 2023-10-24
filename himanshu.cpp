#include<bits/stdc++.h>
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
    
    for(int i = 0; i < pow(2, t); i++) {
        int logic = i ^ (i >> 1);
        bitset<16> binary(logic);
        cout << binary.to_string().substr(16-t) << endl;
    }

    return 0;
}