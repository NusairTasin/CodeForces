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
        uint a[4];
        uint cnt=0;
        string s;
        for(int i=0;i<=4;i++) cin>>a[i];
        cin>>s;
        for(int i=1;i<=4; i++) {
            for(int j=0;j<s.length();j++) {
                if(i == s[j]) {
                    cnt += a[i];
                }
                else continue;
            }
        }
        cout<<cnt<<endl;
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }