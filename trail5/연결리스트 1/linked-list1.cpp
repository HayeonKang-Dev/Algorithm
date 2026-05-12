#include <bits/stdc++.h>
using namespace std;

string s; 
int N; 
list<string> v; 
void print() {
    for(string a : v) cout<<a<<' ';
    cout<<'\n';
}
int main() {
    // Please write your code here.
    cin>>s>>N; 
    v.push_back(s); 
    auto cur = v.begin(); 
    while(N--) {
        int n; 
        cin>>n; 
        if (n == 1) {
            string a; cin>>a; 
            v.insert(cur, a); 

            auto prv = cur;
            auto next = cur; next++; 
            if (cur == v.begin()) cout<<"(Null) "; 
            else cout<<*--prv<<' ';

            cout<<*cur<<' ';

            if (next == v.end()) cout<<"(Null)\n"; 
            else cout<<*next<<'\n';
        }
        else if (n==2) {
            string a; cin>>a; 
            auto nxt = cur; nxt++; 
            v.insert(nxt, a); 
            
            auto prv = cur;
            auto next = cur; next++; 
            if (cur == v.begin()) cout<<"(Null) "; 
            else cout<<*--prv<<' ';

            cout<<*cur<<' ';

            if (next == v.end()) cout<<"(Null)\n"; 
            else cout<<*next<<'\n';
        }
        else if (n==3) {
            if (cur != v.begin()) cur--; 
            
            auto prv = cur;
            auto next = cur; next++; 
            if (cur == v.begin()) cout<<"(Null) "; 
            else cout<<*--prv<<' ';

            cout<<*cur<<' ';

            if (next == v.end()) cout<<"(Null)\n"; 
            else cout<<*next<<'\n';
        }
        else {
            auto tmp = cur; 
            tmp++; 
            if (tmp != v.end()) cur++; 
            
            auto prv = cur;
            auto next = cur; next++; 
            if (cur == v.begin()) cout<<"(Null) "; 
            else cout<<*--prv<<' ';

            cout<<*cur<<' ';

            if (next == v.end()) cout<<"(Null)\n"; 
            else cout<<*next<<'\n';
        }
    }
    return 0;
}