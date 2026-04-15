//Created by Vũ Thị Thu Hường
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define int long long
#define ily2107 "ily2107"
#define time (1.0*clock()/CLOCKS_PER_SEC)
string s;
vector<char> vec;
signed main() {
    freopen(ily2107".inp","r",stdin);
    freopen(ily2107".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> s;
    int n=s.size();
    for (int i=0;i<n;++i) {
        if (vec.size() && s[i]==vec.back()) {
            while (s[i]==vec.back()) ++i;
            vec.pop_back();
            --i;
        } else vec.push_back(s[i]);
    }
    for (char x:vec) cout << x;
    return 0;
}