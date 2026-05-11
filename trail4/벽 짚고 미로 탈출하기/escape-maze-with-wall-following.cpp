#include <bits/stdc++.h>
using namespace std;

int N;
char A[102][102];
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1}; // 북, 동, 남, 서
bool isOut(int x, int y) {
    return x < 1 || y < 1 || x > N || y > N;
}

// [x][y][direction] 방문 여부 체크
bool visited[102][102][4];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= N; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < N; j++) {
            A[i][j + 1] = s[j];
        }
    }

    int dir = 1; // 시작 방향: 우측(동쪽)
    int t = 0;

    while (true) {
        // 현재 위치와 방향을 이미 경험했다면 무한 루프
        if (visited[x][y][dir]) {
            cout << -1;
            return 0;
        }
        visited[x][y][dir] = true;

        int nx = x + dx[dir], ny = y + dy[dir];

        // Step 1 : 바라보고 있는 방향으로 이동 불가능(벽)한 경우
        if (!isOut(nx, ny) && A[nx][ny] == '#') {
            dir = (dir + 3) % 4; // 반시계 90도 회전
            // 주의: 이때는 시간이 흐르지 않으므로 t를 증가시키지 않고 다시 루프
            continue;
        }
        
        // Step 2 : 이동 가능한 경우
        // Case 1 : 바로 앞이 격자 밖
        if (isOut(nx, ny)) {
            t++;
            break;
        }

        // 가상의 이동 위치(nx, ny) 기준 오른쪽 확인
        int right = (dir + 1) % 4;
        int rx = nx + dx[right];
        int ry = ny + dy[right];

        // Case 2 : 오른쪽에 짚을 벽이 있는 경우
        if (!isOut(rx, ry) && A[rx][ry] == '#') {
            x = nx; y = ny;
            t++;
        }
        // Case 3 : 오른쪽에 벽이 없는 경우
        else {
            // 현재 방향으로 한 칸 이동 후
            x = nx; y = ny;
            t++;
            
            // 방향을 시계 방향으로 틀어 한 칸 더 전진
            dir = right;
            x = x + dx[dir];
            y = y + dy[dir];
            
            // 전진한 곳이 밖이라면 탈출
            if (isOut(x, y)) {
                t++;
                break;
            }
            t++;
        }
    }

    cout << t;
    return 0;
}