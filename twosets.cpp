#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

int main() {
    ll n;
    cin >> n;

    ll total_sum = (n * (n + 1)) / 2;

    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;

        vector<int> set1, set2;

        ll target_sum = total_sum / 2;

        while (n > 0) {
            if (n <= target_sum) {
                set1.push_back(n);
                target_sum -= n;
            } else {
                set2.push_back(n);
            }
            n--;
        }
        cout << set1.size() << endl;
        for (int i : set1) {
            cout << i << " ";
        }
        cout << endl;

        cout << set2.size() << endl;
        for (int i : set2) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
