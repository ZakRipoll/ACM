#include <iostream>
#include <string>
#include <sstream>

#define MAX 8
#define MAXMAX 64

using namespace std;

int main()
{
	int loop, result, chessBoard[MAX][MAX];

	string sqare;

	cin >> loop;

	for( unsigned i = 0; i < loop; ++i )
	{
		for( unsigned j = 0; j < MAX; ++j ){

			cin >> sqare;

			stringstream ss( sqare );

			ss >> chessBoard[ j / MAX ][ j % MAX];
		}

		/*
			Són reines, van una a cada fila i una a cada columna, només ens importen les diagonasl
		*/
	}
}
