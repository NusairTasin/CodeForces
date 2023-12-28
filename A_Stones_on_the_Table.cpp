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
        uint n;
        cin>>n;

        string s;
        cin>>s;

        int count=0;

        fr(i, s.size()) {
            if(s[i] == s[i+1]) count++;
        }
        cout<<count<<endl;

    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }