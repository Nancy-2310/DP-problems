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

    stack<pair<int , int>> st;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top().first >= v[i]){
                st.pop();
        } 
        if(st.size() > 0)
            cout << st.top().second << " ";
        else 
            cout << 0 << " ";

        st.push( {v[i], i+1});  
    }
    return 0;

}