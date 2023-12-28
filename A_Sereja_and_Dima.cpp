#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double

void solve() {
    unsigned int n,sereja=0,dima=0;
    cin>>n;
    int c[n];

    for(int i=0; i<n; i++) cin>>c[i];

    int i=0,j = n-1;

    if(n == 1) {
        cout<<c[0]<<" "<<"0"<<endl;
    }
    else {
        while(i<=j) {
            if(c[i] >= c[j]) {
                sereja += c[i];
                c[i] = 0;
                i++;
            }
            else {
                sereja += c[j];
                c[j] = 0;
                j--;
            }

            if(c[i] >= c[j]) {
                dima += c[i];
                c[i] = 0;
                i++;
            }
            else {
                dima += c[j];
                c[j] = 0;
                j--;
            }
        }
        cout<<sereja<<" "<<dima;
    }
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}