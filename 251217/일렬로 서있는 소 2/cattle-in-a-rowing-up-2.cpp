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
    int cnt=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            for(int k=0; k<n; k++) {
                if (i != j && j != k) {
                    if (i < j && j < k && v[i] < v[j] && v[j] < v[k]) cnt++; 
                }
            }
        }
    }
    cout<<cnt; 
    return 0;
}