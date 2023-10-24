#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

bool flag = true;
void twoSum(vector<pair<int, int>> v, int target, int s, int e){
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
}
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

    for(int i = 0; i < n; i++){
        twoSum(v , target - v[i].first, i + 1, n - 1);
        if (!flag) {
            cout << " " << v[i].second << endl;
            break;
    }  
    }
    if(flag) cout << "IMPOSSIBLE";
    return 0;

}
    




