    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)

    void solve() {
        ll int n,x,d,dist=0,j=0;
        char s;
        cin>>n>>x;

        fr(i,n) {
            cin>>s>>d;

            if(s == '+') {
                x += d;
            }
            else if(s == '-') {
                if(x >= d) x -= d;
                else if(x < d) dist++;
            }
        }
        cout<<x<<" "<<dist;
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }