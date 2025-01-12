#include <bits/stdc++.h>
using namespace std;
void home()
{
    freopen("array.inp", "r", stdin);
    freopen("array.out", "w", stdout);
}
const int MAXN = 1e6 + 6;
long long a[MAXN], tt[MAXN], ht[MAXN], matt[MAXN], maht[MAXN], kq = -1e18;
int n;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); home();
    cin >> n;
    matt[0] = -1e18;
    long long mi1 = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        tt[i] = tt[i - 1] + a[i];
        matt[i] = max(matt[i - 1], tt[i] - mi1);
        mi1 = min(mi1, tt[i]);
    }
    long long mi2 = 0;
    maht[n + 1] = -1e18;
    for (int i = n; i >= 1; i--) {
        ht[i] = ht[i + 1] + a[i];
        maht[i] = max(maht[i + 1], ht[i] - mi2);
        mi2 = min(mi2, ht[i]);
    }
    long long mi = 0;
    for (int i = 2; i < n; i++) {
        kq = max(kq, tt[i] + mi + maht[i + 1]);
        mi = max(mi, matt[i] - tt[i]);
    }
    cout << kq;
    return 0;
}