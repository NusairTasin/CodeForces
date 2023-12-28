    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)

    void solve() {
        unsigned int T,jokes,sum=0;
        cin>>T;
        vector<int> num;

        fr(i,T) {
            fr(i,7) {
                cin>>jokes;
                num.push_back(jokes);
            }
            for(auto &x: num) {
                sum += x;
            }
            cout<<sum<<endl;
            sum = 0;
            num.clear();
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }