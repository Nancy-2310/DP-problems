#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

ll totalMoves = 0;

void hanoi(ll n , int a, int b , int c){
    if(n == 0) return;
    hanoi(n - 1, a, c, b);
    cout << a << " " << c << endl;
    hanoi(n - 1, b, a, c);
}
int main() 
{
    ll n;
    cin >> n;
    cout << pow(2,n) - 1 << endl;
    hanoi(n , 1 , 2 , 3);
    return 0;
}

