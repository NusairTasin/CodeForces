    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)

    void solve() {
        ll int t;
        cin>>t;
        string s;
        string s1 = "zxcvbnm";

        fr(i, t) {
            cin>>s;

            for(char c : s1) {
                s.erase(remove(s.begin(),s.end(),c),s.end());
            }
            cout<<s<<endl;
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }