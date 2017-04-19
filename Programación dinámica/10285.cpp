#include <iostream>
#include <stdio.h>
#include <vector>
#include <sstream>

#define MAX 100

using namespace std;

int main()
{
	string nomPista, altures;

	vector< int > linia( MAX );

	int loop, midaX, midaY, pista[MAX][MAX];

	cin >> loop;

	for ( unsigned i = 0; i < loop; ++i )
	{
		cin >> nomPista >> midaX >> midaY;

		//LLEGIRM UN VECTOR I EL TRANSFORMEN A MATRIU

		for ( unsigned j = 0; j < ( midaX * midaY ); ++j ){

			cin >> altures;

			stringstream ss( altures );

			ss >> pista[ j / midaY ][ j % midaY ]; 
		}

		cout << nomPista << " " << midaX << " " << midaY << endl;

		for ( unsigned j = 0; j < midaX; ++j )
		{
			for ( unsigned k = 0; k < midaY; ++k )

				cout << pista[j][k] << "\t";

			cout << "\n";
		}
	}
}