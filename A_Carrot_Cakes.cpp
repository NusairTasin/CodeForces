    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)
    #define ull unsigned long long
    #define uint unsigned int

    void solve() {
        ull n,t,k,d;
        cin>>n>>t>>k>>d;

        ull nd = n/k;

        if(n % k) {
            nd++;
        }
        ull time = (nd-1)*t;

        if(time > d) {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }