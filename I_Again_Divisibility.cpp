    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)

    void solve() {
        ll int t;
        int rating;
        cin>>t;

        fr(i, t) {
            cin>>rating;

            if(rating <= 1399) cout<<"Division 4"<<endl;
            else if(rating >= 1400 && rating <= 1599) cout<<"Division 3"<<endl;
            else if(rating >= 1600 && rating <= 1899) cout<<"Division 2"<<endl;
            else if(rating >= 1900) cout<<"Division 1"<<endl;
        }
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }