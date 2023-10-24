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
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    ll ans = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1]) {
            ans += arr[i - 1] - arr[i];
            arr[i] = arr[i-1];
        }
            
    }
    cout << ans;
    return 0;
}


