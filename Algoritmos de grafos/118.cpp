#include <iostream>
#include <string>

using namespace std;

void imprimir( const char *matrix, const int sizeOfMatrix, const int dimx ){

	for( unsigned i = 0; i < sizeOfMatrix; ++i )
	{
		cout << matrix[i] << " ";

		if( ( i + 1 ) % dimx == 0 )

			cout << "\n";
	}
}

int main(){

	int dimx, dimy, posx, posy, aux, sizeOfMatrix;

	dimx = dimy = posx = posy = aux = sizeOfMatrix = -1;

	char orientation;

	string cadena;

	bool foraDeLaMatriu;
	
	//Memòria dinàmica

	char *matrix;
	
	while( cin >> aux )
	{
		if( dimx != -1 and dimy != -1 )
		{
			posx = aux;

			cin >> posy >> orientation;

		} else {

			dimx = aux;

			cin >> dimy;

			cin >> posx >> posy >> orientation;

			sizeOfMatrix = dimx * dimy;

			matrix = new char[ sizeOfMatrix ];

			for( unsigned i = 0; i < sizeOfMatrix; ++i )

				matrix[ i ] = '_';
		}

		//Interumpirem el for en cas de que el robot es foti plel barranc.
		foraDeLaMatriu = false;

		cin >> cadena;

		for ( unsigned i = 0; i < cadena.length() and !foraDeLaMatriu; ++i )
		{
			switch ( orientation )
			{

			case ( 'N' ): //NORTH

				if( cadena.at(i) == 'F' )
				{
					if( matrix[ (posx * dimy ) + posy ] == orientation )

						break;

					posy++;

					if( posy > dimy	)
					{
						posy--;

						foraDeLaMatriu = true;
					}

				} else if( cadena.at(i) == 'R' )

					orientation = 'E';

				else

					orientation = 'W';
			break;

			case ( 'S' ): //SOUTH

				if( cadena.at(i) == 'F' )
				{	
					if( matrix[ (posx * dimy ) + posy ] == orientation )

						break;

					posy--;

					if( posy < 0 )
					{
						posy++;
						foraDeLaMatriu = true;
					}

				} else if( cadena.at(i) == 'R' )

					orientation = 'W';

				else

					orientation = 'E';
			break;

			case ( 'E' ): //EAST

				if( cadena.at(i) == 'F' )
				{
					if( matrix[ (posx * dimy ) + posy ] == orientation )

						break;

					posx++;

					if( posx > dimx )
					{
						posx--;
						foraDeLaMatriu = true;
					}

				} else if( cadena.at(i) == 'R' )

					orientation = 'S';

				else

					orientation = 'N';
			break;
			
			case ( 'W' ): //WETS

				if( cadena.at(i) == 'F' )
				{
					if( matrix[ (posx * dimy ) + posy ] == orientation )

						break;

					posx--;

					if( posx < 0 )
					{
						posx++;
						foraDeLaMatriu = true;
					}

				} else if( cadena.at(i) == 'R' )

					orientation = 'N';

				else

					orientation = 'S';

			break;
			}

			if( foraDeLaMatriu )

				matrix[ (posx * dimy ) + posy ] = orientation;
		}
 	
		imprimir( matrix, sizeOfMatrix, dimx );

		cout << posx << " " << posy << " " << orientation;

		if( foraDeLaMatriu )

			cout << " LOST";

		cout << "\n";
	}
}