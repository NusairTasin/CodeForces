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
        string s1 = "wionvoinviod";
        cout<<'a' - 'A'<<endl;

        //convert to upper case
        fr(i,s1.size()) {
            if(s1[i] >= 'a' && s1[i]<='z')
                s1[i] -= 32;
        }
        cout<<s1<<endl;

        //convert to lower
        string s2 = "POWMGPWMIMOWDO";
        fr(i,s2.size()) {
            if(s2[i] >= 'A' && s2[i]<='Z')
                s2[i] += 32;
        }
        cout<<s2<<endl;

        //function for upper or lower
        string s3 = "MmionMOMOSmoso";

        transform(s3.begin(),s3.end(),s3.begin(), ::toupper);
        cout<<s3<<endl;

        transform(s3.begin(), s3.end(), s3.begin(), ::tolower);
        cout<<s3<<endl;

        //sort numbers descending order
        string s = "19824482";
        sort(s.begin(), s.end(), greater<int>());
        cout<<s<<endl;

    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }