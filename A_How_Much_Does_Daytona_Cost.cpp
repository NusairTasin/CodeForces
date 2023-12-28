    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)

    void solve() {
        unsigned int t,s,num,in,count;
        cin>>t;
        set<int> myset;

        fr(i,t) {
            cin>>s>>num;
            count = 0;
            fr(j, s) {
                cin>>in;
                myset.insert(in);
            }   

            for(auto &x : myset) {
                if(x == num) {
                    count++;
                }
            }
            if(count >= 1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            myset.clear();
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }