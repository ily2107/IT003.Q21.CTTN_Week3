//Created by Vũ Thị Thu Hường
#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define int long long
#define ily2107 "ily2107"
#define time (1.0*clock()/CLOCKS_PER_SEC)
int n;
string s;
vector<int> cry(string p) {
    int m=p.size();
    vector<int> lps(m,0);
    int j=0;
    for (int i=1;i<m;++i) {
        while (j>0 && p[i]!=p[j]) j=lps[j-1];
        if (p[i]==p[j]) ++j;
        lps[i]=j;
    }
    return lps;
}
vector<int> last(string t, string p) {
    vector<int> lps=cry(p);
    vector<int> res;
    int n=t.size(),m=p.size();
    int j=0;
    for (int i=0;i<n;++i) {
        while (j>0 && t[i]!=p[j]) j=lps[j-1];
        if (t[i]==p[j]) ++j;
        if (j==m) {
            res.push_back(i-m+1);
            j=lps[j-1];
        }
    }
    return res;
}
signed main() {
    freopen(ily2107".inp","r",stdin);
    freopen(ily2107".out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> s >> n;
    double  val=n,cnt=0;
    while (n--) {
        string str;
        cin >> str;
        vector<int> ans=last(s,str);
        cout << ans.size() << '\n';
        if (ans.size()==0) cout << -1;
        for (int i=0;i<ans.size();++i) cout << ans[i] << " ";
        cnt+=(ans.size()!=0);
        cout << "\n";
    }
    double kq=(cnt/val)*100;
    cout << setprecision(2) << fixed << (cnt/val)*100 << '\n';
    if (kq>=80) cout << "plagiarism: YES";
    else cout << "plagiarism: NO";
    return 0;
}