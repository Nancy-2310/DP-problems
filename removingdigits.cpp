#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

const int MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;


int f(int n) {
    int rem = -1;
    while (n != 0) {
        rem = max(rem, n % 10);
        n = n / 10;
    }
    return rem;
}

int removeDigit(int n) {
    if (n < 10) return 1;
    return 1 + removeDigit(n - f(n));
}

int main() {
    int n;
    cin >> n;
    cout << removeDigit(n) << endl;
    return 0;
}
