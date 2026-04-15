//Created by Vũ Thị Thu Hường
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define int long long
#define ily2107 "ily2107"
#define time (1.0*clock()/CLOCKS_PER_SEC)
const int N=1e5+5;
int k,n,a[N];
double sum,cnt;
signed main() {
    freopen(ily2107".inp","r",stdin);
    freopen(ily2107".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cout << setprecision(5) << fixed;
    cin >> k >> n;
    for (int i=1;i<=n;++i) {
        cin >> a[i];
        if (i<=k) {
            ++cnt;
            sum+=a[i];
            cout << sum/cnt << '\n';
        } else {
            sum-=a[i-k];
            sum+=a[i];
            cout << sum/cnt << '\n';
        }
    }
    return 0;
}