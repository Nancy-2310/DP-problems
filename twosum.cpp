#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
typedef long long ll;
 
const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;
 
int main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n, target;
    cin >> n >> target;
    
    
 
    vector<pair<int , int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i + 1;
    }
 
    sort(v.begin(), v.end());
 
    bool flag = true;
    int s = 0, e = n - 1;
 
    while(s < e){
        if((v[s].first + v[e].first ) == target && s != e){
            cout << v[s].second<< " " << v[e].second;
            flag = false;
            break;
        }
        else if((v[s].first + v[e].first) < target) 
            s++;
        else 
            e--; 
    }
 
    if(flag) cout << "IMPOSSIBLE";
    return 0;
 
}
    

    




