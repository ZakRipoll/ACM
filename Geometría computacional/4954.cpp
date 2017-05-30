#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


bool detect(vector<float> vx, vector<float> vy, float w, int x , int y){
	if(vx[0] - w/2.0 > 0 or vy[0] - w/2.0 > 0 or vx[x-1] + w/2.0 < 75 or vy[y-1] + w/2.0 < 100) return false;
	else{
		for(int i = 1; i < x; ++i){
			if(vx[i] - vx[i-1] > w) return false;
		}
		for(int i = 1; i < y; ++i){
			if(vy[i] - vy[i-1] > w) return false;
		}	
	}
	return true;

}

int main(){

	int x, y; 
	float w;
	cin >> x >> y >> w;
	while(x !=0 or y!= 0 or w!= 0){
		vector<float> vx(x), vy(y);
		for(int i = 0; i < x; ++i){
			cin >> vx[i];
		}
		for(int i = 0; i < y; ++i){
			cin >> vy[i];
		}
		sort(vx.begin(), vx.end());
		sort(vy.begin(), vy.end());
		detect(vx,vy,w,x,y)? cout << "YES"<< endl : cout << "NO" << endl;
		cin >> x >> y >> w;
	}
	cout << endl;
}