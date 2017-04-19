#include <iostream>

using namespace std;

int main(){

	int loop, first, second, team;

	cin >> loop;

	for (int i = 0; i < loop; ++i)
	{
		cin >> first >> second;

		if( second > first or second %2 != first %2 )
		{
			cout << "impossible" << endl;
			continue;
		}

		team = ( first + second ) * .5;  

		cout << team << " " <<  team - second << endl;
	}
}