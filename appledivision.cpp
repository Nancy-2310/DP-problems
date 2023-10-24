#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll minimum = INF;

ll f(vector<ll> v, ll x1, ll x2, int index, ll minimum) {
    if (index == (int)v.size()) return abs(x1 - x2);
    return min(f(v, x1 + v[index], x2, index + 1, minimum),f(v, x1, x2 + v[index], index + 1, minimum) );
}

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << f(a, 0, 0, 0, minimum);
    return 0;
}
