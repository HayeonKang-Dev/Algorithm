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
    for(int i=1; i<n; i++) {
        int key = v[i]; 
        int j = i-1; 
        while(j >= 0 && v[j] > key) {
            v[j+1] = v[j]; 
            j--; 
        }
        v[j+1] = key; 
    }
    for(int a : v) cout<<a<<' ';
    return 0;
}