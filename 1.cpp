//Created by Vũ Thị Thu Hường
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
// #define int long long
#define ily2107 "ily2107"
#define time (1.0*clock()/CLOCKS_PER_SEC)
string s,t;
vector<char> a,b;
signed main() {
    freopen(ily2107".inp","r",stdin);
    freopen(ily2107".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> s >> t;
    for (int i=0;i<s.size();++i) {
        if (s[i]!='#') a.push_back(s[i]);
        else if (a.size()) a.pop_back();
    }
    for (int i=0;i<t.size();++i) {
        if (t[i]!='#') b.push_back(t[i]);
        else if (b.size()) b.pop_back();
    }
    if (a==b) cout << "YES";
    else cout << "NO";
    return 0;
}