//Created by Vũ Thị Thu Hường
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define int long long
#define ily2107 "ily2107"
#define time (1.0*clock()/CLOCKS_PER_SEC)
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
const int N=15;
int n,m,a[N][N];
void last() {
    queue<pair<int,int>> q;
    int cnt=0,ans=0;
    for (int i=1;i<=n;++i) {
        for (int j=1;j<=m;++j) {
            if (a[i][j]==2) ++cnt,q.push({i,j});
        }
    }
    while (!q.empty()) {
        ++ans;
        int pre=0;
        for (int i=1;i<=cnt;++i) {
            auto cap=q.front();q.pop();
            for (int k=0;k<=3;++k) {
                int x=cap.fi+dx[k];
                int y=cap.se+dy[k];
                if (x>=1 && y>=1 && x<=n && y<=m && a[x][y]==1) {
                    a[x][y]=2;
                    q.push({x,y});
                    ++pre;
                }
            }
        }
        cnt=pre;
    }
    for (int i=1;i<=n;++i) {
        for (int j=1;j<=m;++j) {
            if (a[i][j]==1) {
                cout << -1;
                return;
            }
        }
    }
    cout << ans-(ans!=0);
}
signed main() {
    freopen(ily2107".inp","r",stdin);
    freopen(ily2107".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for (int i=1;i<=n;++i) {
        for (int j=1;j<=m;++j) {
            cin >> a[i][j];
        }
    }
    last();
    return 0;
}