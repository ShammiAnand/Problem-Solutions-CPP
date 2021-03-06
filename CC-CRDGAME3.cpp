//This code is written by Shammi Anand
#include<bits/stdc++.h>
using namespace std;

#define ll              long long
#define Max(a,b,c)      max(a,max(b,c))
#define Min(a,b,c)      min(a,min(b,c))
#define pb              push_back
#define mp              make_pair
#define f               first
#define s               second
#define mod             1000000007
#define nl              "\n"
#define w(x)            int x; cin>>x; while(x--)

void shammi() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int ceiling(int a , int b) {
	if (a % b == 0) return a / b;
	else return (a / b) + 1;
}

int main() {
	shammi();
	w(t) {
		int pc, pr; cin >> pc >> pr;
		if (ceiling(pc, 9) < ceiling(pr, 9)) cout << 0 << " " << ceiling(pc, 9) << nl;
		else cout << 1 << " " << ceiling(pr, 9) << nl;
	}
	return 0;
}