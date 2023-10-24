#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;

        bool possible = false;

        for (int a1 = x; a1 <= y; ++a1) {
            int diff = y - a1;
            
            if (diff * (n - 2) >= n * (n - 1) / 2) {
                int current = a1;
                cout << current << " ";
                
                for (int i = n - 1; i >= 1; --i) {
                    current += i;
                    cout << current << " ";
                }
                
                possible = true;
                break;
            }
        }

        if (!possible) {
            cout << -1;
        }

        cout << endl;
    }

    return 0;
}



