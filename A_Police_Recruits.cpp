    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)
    #define ull unsigned long long
    #define uint unsigned int

    void solve() {
        ull n;
        ll int police=0,crime=0;
        cin>>n;
        int arr[n];

        fr(i,n) {
            cin>>arr[i];
            if(arr[i] > 0) police += arr[i];
            if(arr[i] == -1 && police == 0) crime++;
            if(arr[i] == -1 && police > 0) police--; 
        }
        cout<<crime<<endl;
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }