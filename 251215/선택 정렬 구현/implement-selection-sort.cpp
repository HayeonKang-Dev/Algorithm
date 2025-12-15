#include <bits/stdc++.h>
using namespace std;
int n; 
vector<int> v; 

int main() {
    // Please write your code here.
    cin>>n; 
     
    for(int i=0; i<n; i++) {
        int a; 
        cin>>a; 
        v.push_back(a); 
    }

    for(int i=0; i<n-1; i++) {
        int mn = i; 
        for(int j=i+1; j<n; j++) {
            if (v[mn] > v[j]) {
                mn = j; 
            }
        }
        int tmp = v[i]; 
        v[i] = v[mn]; 
        v[mn] = tmp;
         
    }
    for(int a : v) cout<<a<<' '; 
    return 0;
}