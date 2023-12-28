#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define fr(i,n) for(ll i=0; i<n; i++)

void solve() {
    ll n,k;
    cin>>n>>k;

    string a = "cdefghijklmnopqrstuvwxyz";
    string b = "ab";
    ll counter = 0;

    fr(i,n-2) {
        if(k > 2) {
            b += a[i];
            k--;
        }
        else {
            if(counter == 0 && b.size() < n) b += 'a', counter = 1;
            if(counter == 1 && b.size() < n) b += 'b', counter = 0;
        }
    }
    cout<<b<<endl;  
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}