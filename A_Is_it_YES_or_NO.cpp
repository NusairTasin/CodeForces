    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)

    void solve() {
        ll int t;
        cin>>t;
        string s;
        string s1 = "yes";

        fr(i, t) {
            ll int count = 0;
            cin>>s;
            transform(s.begin(), s.end(), s.begin(), ::tolower);

            fr(j, s.length()) {
                if(s[j] == s1[j]) count++;
            }
            if(count == 3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }