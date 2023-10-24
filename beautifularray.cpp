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
    
    if(n == 1) cout << 1;
    else if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
    } else {
        
        for (long long i = 2; i <= n; i += 2) {
            cout << i << " ";
        }

        for (long long i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }

    return 0;
}

