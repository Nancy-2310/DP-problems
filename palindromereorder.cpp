#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
// #define int long long 
 
const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie();
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
 
    string str;
    cin >> str;
 
    int arr[26] = { };
 
    for(char i: str)
        arr[i-'A']++;
 
    char ch = '.';  
    char count = str.size()&1 ? '1' : '0';
 
    for(int i = 0; i < 26 ; i++) 
        if(arr[i]&1) {
            count = count - 1;
            ch = (char) (i + 'A');
        }
        
    if(count != '0') 
        cout << "NO SOLUTION" << endl;
    else {
        for(int i = 0; i < 26; i++)  
            for(int j = 0 ; j < arr[i]/2 ; j++) 
                cout << (char)(i + 'A');
 
        if(str.size()&1)
            cout << ch;
 
        for(int i = 25; i > -1; i--)
            for(int j = 0 ; j < arr[i]/2 ; j++) 
                cout << (char)(i + 'A');
        
    }
 
    return 0;
}