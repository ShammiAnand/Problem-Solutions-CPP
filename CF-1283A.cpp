#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int k=0;k<t;k++){
		int h,m;
		cin >> h >> m;
		cout << (24-h)*60-(m) << "\n";
	}
	return 0;
}