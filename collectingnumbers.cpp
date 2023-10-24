#include <bits/stdc++.h>
using namespace std;

#define endl '\n';
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() {

    ll n;
    cin >> n;
    
    int count = 0;
    vector<int> v(n+1,0);
    int num;

    for(int i = 1; i <= n; i++ ){
        cin >> num; 
        if(v[num - 1] == 0){
            v[num] = 1;
            count++;
    }
        else {
            v[num] = 1;
            continue;
    }

    }

    cout << count;
    return 0;

}

