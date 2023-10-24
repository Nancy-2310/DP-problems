#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n ; i++){
        cin>>v[i];
    }
    int ans = 0;
    set<int>set;
    int i = 0, j = 0;
    while (i < n and j < n)
    {
        while (j < n and !set.count(v[j]))
        {
            set.insert(v[j]);
            ans = max(ans , j - i + 1);
            j++;
        }

        while (j < n and set.count(v[j]))
        {
            set.erase(v[i]);
            i++;
        }
        
        
    }
    cout << ans << endl;
    return;
    
}

int main() {
    solve();
    return 0;
}

