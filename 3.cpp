//Created by Vũ Thị Thu Hường
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define int long long
#define ily2107 "ily2107"
#define time (1.0*clock()/CLOCKS_PER_SEC)
int n;
stack<int> q;
signed main() {
    freopen(ily2107".inp","r",stdin);
    freopen(ily2107".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i=1;i<=n;++i) {
        string s;
        cin >> s;
        if (s.size()>=2 || (s[0]>='0' && s[0]<='9')) q.push(stoi(s));
        else {
            int y=q.top();q.pop();
            int x=q.top();q.pop();
            if (s[0]=='+') q.push(x+y);
            if (s[0]=='-') q.push(x-y);
            if (s[0]=='*') q.push(x*y);
            if (s[0]=='/') q.push(x/y);
        }
    }
    cout << q.top();
    return 0;
}