    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)
    #define ull unsigned long long
    #define uint unsigned int

    void solve() {
        ull n,b,d,a,sum=0,cnt=0;
        cin>>n>>b>>d;
        while(n--) {
            cin>>a;
            if(a <= b) sum += a;
            if(sum > d) sum = 0, cnt++;
        }
        cout<<cnt;
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }