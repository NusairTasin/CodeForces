#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lb long double
#define fr(i,n) for(ll i=0; i<n; i++)
#define ull unsigned long long
#define uint unsigned int

void solve() {
    uint T,N,K;
	cin>>T;

	fr(i,T) {
		cin>>N>>K;
		int A[N];
		fr(i,N) {
		    cin>>A[i];
		}
		int start=K, end=N-1;
		fr(i,K) {
			int temp = A[start];
			A[start] = A[end];
            A[end] = temp;
            start++;
            end--;
		}
        
		fr(l,N) cout<<A[l]<<" ";
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}