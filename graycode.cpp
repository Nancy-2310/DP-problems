#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;



vector<string> gray(int n){
    vector<string> res;

    if(n == 1){
        res.push_back("0");
        res.push_back("1");
        return res;
    }
    vector<string> curr = gray(n - 1);
    int s = curr.size();
    
    for(int i = 0; i < s; i++){
        res.push_back('0'+curr[i]);
    }
    for(int i = s - 1; i >= 0; i--){
        res.push_back('1' + curr[i]);
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<string> a = gray(n);
    for(auto ele : a){
        cout << ele << endl;
    }
    
    return 0;
}
