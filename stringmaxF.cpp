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
        string s = "nvoevoieondfsvkasvvvvdddfytcytcycvty";
        
        int freq[26];

        fr(i,26) {
            freq[i] = 0;
            fr(i,s.size()) {
                freq[s[i] - 'a']++;
            }
        }
        char ans = 'a';
        int maxF = 0;

        fr(i, 26) {
            if(freq[i]>=maxF) {
                maxF = freq[i];
                ans = i+'a';
            }
        }
        cout<<maxF<<" "<<ans<<endl;
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }