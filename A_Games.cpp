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
        vector<int> c;
        vector<int> b;
        uint n,h,a,cnt=0;
        cin>>n;
        fr(k,n) {
            cin>>h>>a;
            b.push_back(h);
            c.push_back(a);
        }
        fr(i,b.size()) {
            fr(j,c.size()) {
                if(b[i] == c[j]) cnt++;
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