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

void transpose(int matrix[64][64], int L) {
	int copy[L][L];
	F(i, L) {
		F(j, L) {
			copy[i][j] = matrix[i][j];
		}
	}
	F(i, L) {
		F(j, L) {
			matrix[i][j] = copy[i][j];
		}
	}
}

bool check(int matrix[64][64], int n) {
	F(i, n) {
		F(j, n) {
			if (matrix[i][j] != (i - 1)*n + j) return false;
		}
	}
	return true;
}

int main() {
	shammi();
	w(t) {
		int n; cin >> n;
		int matrix[64][64], copy[64][64];
		F(i, n) {
			F(j, n) {
				cin >> matrix[i][j];
			}
		}
		F(i, n) {
			// matrix = copy;
			F(j, n) {
				copy[i][j] = matrix[i][j];
			}
		}
		int mn = INF;
		F(i, n) {
			F(k, n) F(z, n) matrix[k][z] = copy[k][z];
			int count = 0;
			while (!check(matrix, n) && count < n) {
				transpose(matrix, count);
				if (check(matrix, n)) {
					break;
				} else {
					count++;
				}
			}
			mn = min(count, mn);
		}
		cout << mn << nl;
	}
	return 0;
}