//Created by Vũ Thị Thu Hường
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define int long long
#define ily2107 "ily2107"
#define time (1.0*clock()/CLOCKS_PER_SEC)
int t,n,so,ans,cnt[30];
char a[10005];
signed main() {
    freopen(ily2107".inp","r",stdin);
    freopen(ily2107".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> t;
    for (int i=1;i<=t;++i) {
        cin >> a[i];
        ++cnt[a[i]-'A'];
        so=max(so,cnt[a[i]-'A']);
    }
    cin >> n;
    int count=0;
    for (int i=0;i<=25;++i) if (cnt[i]==so) ++count;
    ans=(so-1)*(n+1)+count;
    cout << max(t,ans);
    return 0;
}