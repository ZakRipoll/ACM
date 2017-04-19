/* 	O\D	0	1	2	3	4	5
	0	0	1	0	1	0	0
	1	0	0	1	0	1	0
	2	0	0	0	0	1	0
	3	0	1	0	0	0	0
	4	0	0	0	1	0	1
	5	0	0	1	0	0	0 */

#include <iostream>

/*RANDOM*/

#include <time.h>
#include <stdlib.h>

#define MAX 10

void imprimir( int mat[MAX][MAX] ){

	for (int i = 0; i < MAX; ++i)
	{
		
		for (int j = 0; j < MAX; ++j)

			std::cout << mat[i][j] << " ";

		std::cout << "\n";
	}

	std::cout << "\n";

}

void clear( int mat[MAX][MAX] ){

	for (int i = 0; i < MAX; ++i)
		
		for (int j = 0; j < MAX; ++j)
			
			mat[i][j] = 0;

}

void identity( int mat[MAX][MAX] ){

	for (int i = 0; i < MAX; ++i)
		
		for (int j = 0; j < MAX; ++j){

			mat[i][j] = 0;

			if( i == j )

				mat[i][j] = 1;
		}

}

void graf( int mat[MAX][MAX] ){

	srand( time( NULL ) );

	for (int i = 0; i < 25; ++i)
	{
		int x = rand() % MAX;
		int y = rand() % MAX;

		if( x != y && mat[x][y] == 0 )

			mat[x][y] = mat[y][x] = 1;

		else 
			i--;
	}
}

void printAdjacentNodeJde0aI( int mat[MAX][MAX] ){

	bool adjacent;

	for (int i = 0; i < MAX; ++i)
	{
		adjacent = false;

		for (int j = 0; j < i; ++j)
		{
			if( mat[i][j] == 1 ){

				adjacent = true;

				std::cout << i << " --> " << j << "\t";
			}
		}
		if ( adjacent )
			std::cout << "\n";
	}
}


void printAdjacentNodeHalfTable( int mat[MAX][MAX] ){

	bool adjacent;

	for (int i = 0; i < MAX / 2; ++i)
	{
		adjacent = false;

		for (int j = 0; j < MAX; ++j)
		{
			if( mat[i][j] == 1 ){

				adjacent = true;

				std::cout << i << " --> " << j << "\t";
			}
		}
		if ( adjacent )
			std::cout << "\n";
	}
}



int main(){

	int mat[MAX][MAX];

	//Omplim la matriu de 0
	clear( mat );
	std::cout << "Matriu plena de 0:" << std::endl;
	imprimir( mat );

	//identity
	identity( mat );
	std::cout << "Matriu identitat:" << std::endl;
	imprimir( mat );

	clear( mat );
	graf( mat );
	std::cout << "Matriu graf:" << std::endl;
	imprimir( mat );

	std::cout << "Adjacents j < i :" << std::endl;
	printAdjacentNodeJde0aI( mat );

	std::cout << "Adjacents mitja taula:" << std::endl;
	printAdjacentNodeHalfTable( mat );
}