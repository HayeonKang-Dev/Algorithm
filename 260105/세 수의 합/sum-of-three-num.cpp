#include <bits/stdc++.h>
using namespace std;
int n, k; 
long long arr[1002];

int main() {
    // Please write your code here.
    cin>>n>>k; 
    for(int i=0; i<n; i++) {
        cin>>arr[i]; 
    }

    int ans=0; 
    for(int i=0; i<n; i++) {
        unordered_map<long long, long long> mp; 

        for(int j=i+1; j<n; j++) {
            long long diff = k-arr[i]-arr[j]; 
            ans += mp[diff]; 
            mp[arr[j]]++; 
        }
    }
    cout<<ans; 
    return 0;
}