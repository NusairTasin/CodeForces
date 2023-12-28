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
        uint N;
        cin>>N;
        if(N < 1582 && N%4==0) cout<<"I can participate in LCPC";
        else if( N%4==0 && N%100==1) cout<<"I can participate in LCPC";
        else if( N%4==0 && N%400==0) cout<<"I can participate in LCPC"; 
        else cout<<"I have to travel back to the past";
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }