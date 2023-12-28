    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define lb long double
    #define fr(i,n) for(ll i=0; i<n; i++)
    #define ull unsigned long long
    #define uint unsigned int

    void solve() {
        string str;
        getline(cin, str);
        set<char> st;
        fr(i,str.size()) {
            if(isalpha(str[i])) {
                st.insert(str[i]);
            }
            else continue;
        }
        cout<<st.size();
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }