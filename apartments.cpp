#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() {

    int applicants, apartments , reqDiff;
    cin >> applicants >> apartments >> reqDiff;
    vector<ll> appli(applicants);
    vector<ll> apart(apartments);

    for (int i = 0; i < applicants; i++) {
        cin >> appli[i];
    }
    for (int i = 0; i < apartments; i++) {
        cin >> apart[i];
    }
    
    sort(appli.begin(), appli.end());
    sort(apart.begin(), apart.end());
    int a = 0, b = 0;
    int diff, count = 0;

    while(a < applicants && b < apartments){
        diff = abs(appli[a] - apart[b]);
        if(diff <= reqDiff){
            count++;
            a++;
            b++;
        }
        else if(appli[a] < apart[b]){
            a++;
        }
        else{
            b++;
        }
    }

    cout << count << endl;
    return 0;
}
