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
		int matrix[64][64];
		F(i, n) {
			F(j, n) {
				cin >> matrix[i][j];
			}
		}
		int count = 0;
		for (int j = n - 1; j > 0; j--) {
			if (matrix[0][j] != j + 1) {
				if (count % 2 == 0) count++;
			}
			else {
				if (count % 2 != 0) count++;
			}
		}
		cout << count << nl;
	}
	return 0;
}