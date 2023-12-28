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
        string s,s2,s3;
        uint cnt;
        fr(i,n) {
            cnt = 0;
            cin>>s>>s2>>s3;
            fr(j,s.length()) {
                if(s[i] == 'X') cnt++;
            }
            fr(k,s2.length()) {
                if(s2[i] == 'X') cnt++;
            }
            fr(l,s3.length()) {
                if(s3[i] == 'X') cnt++;
            }
            if(cnt%2==0) cout<<"Game #"<<i+1<<": Bob";
            else cout<<"Game #"<<i+1<<": Alice";
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }