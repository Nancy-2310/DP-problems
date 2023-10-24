#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() 
{
    ll n, temp;
    cin >> n;
    
    vector<int> v;
    
    
    for(int i = 0; i < n; i++){
        cin >> temp;
        
        auto it = upper_bound(v.begin(), v.end(), temp);
        if(it == v.end()) v.push_back(temp);
        else *it = temp;
    }
    
    cout << v.size();
    return 0;
}

