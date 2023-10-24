#include <bits/stdc++.h>
using namespace std;

void f(string s, int index){
    if(index >= s.length()) { 
        cout << s << endl;
        return;
    }


char prev = '.';  
for(int i = index; i < s.size(); i++){
    if(prev == s[i]) continue;
    else{
        swap(s[i], s[index]);
        f(s, index + 1);
        swap(s[i], s[index]);
        prev = s[i];
    }
        
    
}
}

int main() {
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    f(s,0);
    return 0;
}