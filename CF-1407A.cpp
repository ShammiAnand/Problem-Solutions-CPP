/*
This code is written by Shammi Anand
contact : shammianand101@gmail.com, shammianand.me
*/
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define pb              push_back
#define f               first
#define s               second
#define vi              vector<int>
#define pii             pair<int, int>
#define rep(i,a,n)      for(int i=a;i<n;i++)
#define F(i,n)          for(int i=0;i<n;i++)
#define print(a)        for(auto x : a) cout << x << " ";
#define all(a)          a.begin(), a.end()
#define INF             1e9+7
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)


void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		vi a(n);
		int zero = 0, one = 0;
		for (int& elem : a) {
			cin >> elem;
			if (elem) one++;
			else zero++;
		}
		if (one <= n / 2) {
			cout << zero << nl;
			for (int i = 0; i < zero; i++) {
				cout << 0 << (i + 1 == zero ? "\n" : " ");
			}
		} else {
			cout << one - zero % 2 << '\n';
			for (int i = 0; i < one - zero % 2; i++) {
				cout << 1 << (i + 1 == (one - zero % 2) ? "\n" : " ");
			}
		}
	}
	return 0;
}