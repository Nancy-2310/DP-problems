#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
typedef long long ll;
 
const int MOD = 1e9+7;
 
int main() {

    int n;
    cin >> n;

    vector<ll> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    ll cost = 0;
    
    int mid = n/2;
    
    for(int i = 0; i < n; i++){
        cost += abs(v[i] - v[mid]);
    }

    cout << cost;
    return 0;
}