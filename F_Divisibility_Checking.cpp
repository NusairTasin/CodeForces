    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)

    void solve() {
        unsigned int t;
        cin>>t;
        ll int n,k;

        fr(i, t) {
            cin>>n>>k;
            vector<int> div;
            for(int j=1; j<n*k; j++) {
                if(j%n==1) {
                    div.push_back(j);
                    k--; 
                }

                //c = (a*b)/(a-1)
            }
            cout<<div.back()<<endl;
            div.clear();
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }