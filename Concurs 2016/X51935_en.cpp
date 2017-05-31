#include <iostream>
#include <string>

using namespace std;

typedef struct 
{
	string assignatura;
	string dia;
	string hora;
	string aula;
} s;

int main()
{
	int loop;

	string dia, hora;

	s *horari;

	while( cin >> loop ){

		horari = new s[ loop ];

		for (int i = 0; i < loop; ++i)

			cin >> horari[i].assignatura >> horari[i].dia >> horari[i].hora >> horari[i].aula;

		cin >> dia >> hora;

		for (int i = 0; i < loop; ++i)
		
			if( horari[i].dia == dia and horari[i].hora == hora )

				cout << horari[i].aula << endl;;

	}
}