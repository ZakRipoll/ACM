#include <iostream>

#define MAX 500

using namespace std;

int main()
{
	int aux, dimx, dimy, posx, posy, posxM, posxm, posyM, posym, contador;

	char matrix[MAX][MAX];

	bool acbar;

	while( cin >> aux )
	{
		dimx = aux;

		cin >> dimy;

		for (int i = 0; i < dimx; ++i)

			for (int j = 0; j < dimy; ++j)

				cin >> matrix[i][j];

		matrix[0][0] = 'R';

		posy = posx = 0;

		acbar = true;

		while( matrix[dimx-1][dimy-1] == '.' and !acbar )
		{
			if( dimx <= 1 and dimy <= 1 )
				break;

			posxM = posx+1;
			posxm = posx-1;
			posyM = posy+1;
			posym = posy-1;

			if( posxM < dimx and matrix[posxM][posy] == '.' )
			{
				posx++;
				matrix[posx][posy] = 'R';
				continue;
			}
			else if( posxm >= 0 and matrix[posxm][posy] == '.' )
			{
				posx--;
				matrix[posx][posy] = 'R';
				continue;
			}
			else if( posyM < dimy and matrix[posx][posyM] == '.' )
			{
				posy++;
				matrix[posx][posy] = 'R';
				continue;
			}
			else if( posym >= 0 and matrix[posx][posym] == '.' )
			{
				posy--;
				matrix[posx][posy] = 'R';
				continue;
			}
			else

				acbar = true;
		}

		if( acbar )

			cout << -1 << endl;

		else if( dimx == 1 and dimy == 1 )

			cout << 1 << endl;

		else
		{
			contador = -1;

			for (int i = 0; i < dimx; ++i)

				for (int j = 0; j < dimy; ++j)
					
					if( matrix[i][j] == 'R')

						contador++;

			cout << contador << endl;
		}

	}
}