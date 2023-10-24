#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;


int main() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    #endif

    ll n;
    cin >> n;
    cout << n << " ";

    while(n != 1) 
    {

        if(n&1) 
        {
            n = n*3+1;
            cout << n << " ";
        }
        else 
        {
            n = n/2;
            cout << n << " ";
        }
    }

    cout << endl;

    return 0;
}