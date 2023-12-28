#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define fr(i,n) for(ll i=0; i<n; i++)

void solve() {
    set<int> myset;
    int u = 0;
    fr(i, 4) {
        int n;
        cin>>n;
        myset.insert(n);
    }
    int size = myset.size();
    int count = 4 - size;
    cout<<count;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}