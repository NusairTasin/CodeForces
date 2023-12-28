    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)

    void solve() {
        ll int t,a,count;
        int n,k;
        cin>>t;

        fr(i, t) {
            cin>>n;
            count=0;

            if(n == 1) cout<<"YES"<<endl;
            else {
                int a[n];
                for(int j=0; j<n; j++) {
                    cin>>a[j];
                    if(a[j] == a[j-1]) count++;
                    else if(a[0] == a[n]) count++;
                }
                if(count>=1) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }