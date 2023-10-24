#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int smallestUncreatedSum(vector<ll>& coins) {
    int n = coins.size();
    int result = 1;  // Initialize the result to 1, as you can always create the sum 1.

    for (int i = 0; i < n && coins[i] <= result; ++i) {
        result += coins[i];
    }

    return result;
}

int main() {
    
    ll n;
    cin >> n;
    vector<ll> v(n+1);

    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }
    int result = smallestUncreatedSum(v);
    cout << result << endl;

    return 0;
}
