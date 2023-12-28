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
        uint n,m,a,b,cnt=0;
        vector<int>boy;
        vector<int>girl;
        cin>>n;
        fr(i,n) {
            cin>>a;
            boy.push_back(a);
        }
        cin>>m;
        fr(i,m) {
            cin>>b;
            girl.push_back(b);
        }
        sort(boy.begin(), boy.end());
        sort(girl.begin(), girl.end());

        fr(i,boy.size()) {
            fr(j,girl.size()) {
                if(boy[i] == girl[j] || boy[i] == girl[j]+1 || boy[i] == girl[j]-1) {
                    cnt++;
                    girl[j] = -100;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }

    int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        solve();
        return 0;
    }