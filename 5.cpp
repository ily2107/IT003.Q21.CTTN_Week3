//Created by Vũ Thị Thu Hường
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define int long long
#define ily2107 "ily2107"
#define time (1.0*clock()/CLOCKS_PER_SEC)
stack<double> q;
signed main() {
    freopen(ily2107".inp","r",stdin);
    freopen(ily2107".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string s;
    while (cin >> s) {
        int n=s.size();
        if (s.size()>=2 && (s[0]<'0' || s[0]>'9') && (s[0]=='x' || s[0]==':')) {
            cout << "KHONG HOP LE";
            return 0;
        }
        for (int i=1;i<n;++i) {
            if (s[i]<'0' || s[i]>'9') {
                cout << "KHONG HOP LE";
                return 0;
            }
        }
        if (s.size()>=2 || (s[0]>='0' && s[0]<='9')) q.push(stoi(s));
        else {
            if (q.size()<2) {
                cout << "KHONG HOP LE";
                return 0;
            }
            double y=q.top();q.pop();
            if (y==0 && s[0]==':') {
                cout << "KHONG HOP LE";
                return 0;
            }
            double x=q.top();q.pop();
            if (s[0]=='+') q.push(x+y);
            else if (s[0]=='-') q.push(x-y);
            else if (s[0]=='x') q.push(x*y);
            else if (s[0]==':') q.push(x/y);
            else {
                cout << "KHONG HOP LE";
                return 0;
            }
        }
        s.clear();
    }
    if (q.size()!=1) {
        cout << "KHONG HOP LE";
        return 0;
    }
    cout << q.top();
    return 0;
}