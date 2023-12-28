#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define fr(i,n) for(ll i=0; i<n; i++)
#define ull unsigned long long
#define uint unsigned int

void solve() {
    string s;
    int total = 0;
    char first = 'a';
    cin >> s;
    for (auto i: s){
        total = total + (min(abs(first - i), 26 - abs(first - i)));
        first = i;
    }
    cout << total;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}