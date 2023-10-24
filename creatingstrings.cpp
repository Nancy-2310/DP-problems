#include <bits/stdc++.h>
using namespace std;

void f(set<string>& st, string s, int index){
    if(index == (int)s.length()) { 
        st.insert(s);
        return;
    }
 
for(int i = index; i < (int)s.size(); i++){
        if( i > index &&  s[i] == s[i-1]) {
               continue;
        }
       
        swap(s[i], s[index]);
        f(st,s, index + 1);
        swap(s[i], s[index]);
     }
}

int main() {
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    set<string> st;
    f(st, s ,0);
    cout << st.size() << endl;
    
    for(auto ele : st){
        cout << ele << endl;
    }
    return 0;
}