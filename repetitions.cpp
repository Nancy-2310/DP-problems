#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() 
{   
    string dna;
    cin >> dna;
    ll n = dna.length();
    
    ll maximum = INT_MIN;
    ll sum = 1;
    for(ll i = 0; i < n - 1; i++){
        if(dna[i] == dna[i+1]){
            sum++;
        } else{
            maximum = max(maximum, sum);
            sum = 1;
        }
    }
    
    maximum = max(maximum, sum);
    cout << maximum;
    return 0;
}


