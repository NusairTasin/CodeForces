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
        string s1 = "786";
        int x = stoi(s1);
        string s2 = to_string(x);
        cout<<s2<<endl;

        string s3 = "dgimoefbpoefg";
        sort(s3.begin(), s3.end());
        cout<<s3<<endl;
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }