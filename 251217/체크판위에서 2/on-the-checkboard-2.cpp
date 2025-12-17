#include <bits/stdc++.h>
using namespace std;
int r, c; 
char mp[20][20]; 
int main() {
    // Please write your code here.
    cin>>r>>c; 
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin>>mp[i][j]; 
        }
    }

    int cnt=0;
    // 첫번째 경로지 

    char start = mp[0][0], end= mp[r-1][c-1]; 
    if (start==end) {
        cout<<0<<'\n'; 
        return 0;
    }
    for(int i=1; i<r; i++) {
        for(int j=1; j<c; j++) {
            // 두번째 경로지 
            if (mp[i][j] == start) continue; 
            for(int k=i+1; k<r-1; k++) {
                for(int l=j+1; l<c-1; l++) {
                    if (start != mp[i][j] && mp[i][j] != mp[k][l] && mp[k][l] != end){
                        cnt++; 
                    }
                }   
            }
        }
    }
    cout<<cnt; 
    return 0;
}