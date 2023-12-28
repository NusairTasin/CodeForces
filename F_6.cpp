    #include <bits/stdc++.h>
    using namespace std;
    #define ill long long int
    #define lb long double
    #define fr(i,n) for(ill i=0; i<n; i++)
    #define ull unsigned long long
    #define uint unsigned int
    #define sz(v) (int)v.size()
    #define all(v) v.begin(),v.end()

    void solve() {
        ill T,N,cnt;
        cin>>T;
        fr(i,T) {
            cnt = 0;
            cin>>N;
            if(N%5==0) {
                cnt = N/5;
            }
            else {
                cnt = (N/5)+1;
            }
            cout<<cnt<<endl;
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }