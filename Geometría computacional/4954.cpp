#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool detect(vector<float> vx, vector<float> vy, float w, int x, int y){

	for(int i = 1; i < x; ++i) if(vx[i] - vx[i-1] != w) return false;
	for(int i = 1; i < y; ++i) if(vy[i] - vy[i-1] != w) return false;

	return true;
}

int main(){

	int x, y;
	float w;

	while(cin >> x >> y >> w and x and y and w){

		vector<float> vx(x), vy(y);

		for(int i = 0; i < x; ++i) cin >> vx[i];
		for(int i = 0; i < y; ++i) cin >> vy[i];

		sort(vx.begin(), vx.end());
		sort(vy.begin(), vy.end());

		cout << ( detect(vx,vy,w,x,y) ? "YES" : "NO" ) << endl;
	}
}
