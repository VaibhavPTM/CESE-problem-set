// Link : https://cses.fi/problemset/task/1094
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pii pair<int,int>
#define pll pair<lli,lli>
#define v(T) vector<T>
#define vv(T) vector<vector<T> >
#define maxhp(T) priority_queue<T>
#define minhp(T) priority_queue<T, vector<T> , greater<T> >
#define pb push_back
#define ff first
#define ss second
#define print(x) for(auto it:x) cout<<it<<" ";
#define mem(n,i) memset(n, i,sizeof n)
const lli INF = 1e18;
const lli MOD = 1e9 + 7;
const lli mod = 998244353;
#define endl "\n"
void solve() {
    int n;
    cin >> n;
    lli ar[n];
    for(lli &i : ar) cin >> i;
    lli res = 0;
    for(int i = 1; i < n; i++) {
        if(ar[i] < ar[i-1]) {
            res += ar[i-1] - ar[i];
            ar[i] = ar[i-1];
        }
    }
    cout << res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}