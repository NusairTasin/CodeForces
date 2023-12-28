#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double

void solve() {
    string str1, str2;
    cin>>str1>>str2;

    for(int i=0; i<str1.length(); i++) {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);

        if(str1[i] == str2[i]) {
            continue;
        }
        else if(str1[i] < str2[i]) {
            cout<<"-1";
            break;
        }
        else if(str1[i] > str2[i]) {
            cout<<"1";
            break;
        }
    }
    if(str1 == str2) {
        cout<<"0";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}