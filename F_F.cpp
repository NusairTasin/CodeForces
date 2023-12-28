    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)
    #define ull unsigned long long
    #define uint unsigned int
    #define sz(v) (int)v.size()
    #define all(v) v.begin(),v.end()

    void solve() {
        double val = 2 * acos(0.0);
        string value = "3.141592653589793238462643383279502884197";
        uint T;
        cin>>T;
        uint N;
        fr(i,T) {
            cin>>N;
            N = N+1;
            cout<<value[N]<<endl;
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }