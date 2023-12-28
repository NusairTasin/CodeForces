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
        string s,t;
        cin>>s>>t;
        uint count = 0;
        int j=t.length()-1;
        fr(i,s.length()) {
            if(s[i] == t[j]) {
                count++;
                j--;
            }
            else {
                cout<<"NO";
                break;
            }
        }
        if(count == t.length()) {
            cout<<"YES";
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }