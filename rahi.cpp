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
        uint n,note,cnt;
        vector<int>a;
        set<int>b;
        vector<int>cnut;
        uint ans = 0;
        cin>>n;
        fr(i,n) {
            cin>>note;
            a.push_back(note);
            b.insert(note);
        }
        for(auto i = b.begin(); i!=b.end();i++) {
            fr(j,a.size()) {
                if(*i == a[j]) {
                    cnt++;
                }
            }
            if(cnt>1) cnut.push_back(cnt);
            cnt = 0;
        }
        int j=1;
        for(int i=0;i<=cnut.size()-2;i++) {
            for(j; j<=cnut.size()-1;j++) {
                if(cnut[i] == cnut[j]) ans = 1;
                else continue;
            }
            j++;
        }
        if(ans == 1) cout<<"TRUE";
        else if(ans == 0) cout<<"FALSE";
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }