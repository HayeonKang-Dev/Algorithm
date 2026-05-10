#include <bits/stdc++.h>
using namespace std;
int N, M, K; 
int A[102][102]; 

void print() {
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cout<<A[i][j]<<' '; 
        cout<<'\n';
    }
}

int main() {
    // Please write your code here.
    cin>>N>>M>>K; 
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) cin>>A[i][j]; 
    }

    if (N==1) {
        for(int i=K-1; i<K+M-1; i++) A[0][i] = 1; 
        print(); 
        return 0;
    }
    int ans=N-1;
    for(int i=0; i<N; i++) {
        bool flag = true; 
        for(int j=K-1; j<K+M-1; j++) {
            if (A[i][j]) { flag = false; break;}
        }
        if (!flag)  {
            ans = i-1; 
            break;
        }
    }
    for(int i=K-1; i<K+M-1; i++) {
        A[ans][i] = 1; 
    }
    print(); 
    return 0;
}