/*
	std::string abcdari = "AEHIJLMOSTUVWXYZ12358";
	std::string invert = "A3HILJMO2TUVWXY51SEZ8";

	char minus = cadena[i] + 32; NOMÉS PER ELS LLETRES

		for( i=0;i<=cadena.length()*.5 and (palindrome or mirror); i++){
			j=cadena.length()-1-i;
			if(cadena[i]!=cadena[j]){
				palindrome=false;
			}
			if()
		}
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int i, j, mida;

	string cadena;

	bool palindrome, mirror;

	/*
		MULLON RECOMANA: switch case!!!!!!!!!!!!!!!!!!!!!
	*/

	string abcdari = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	string invertt = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

	mida = abcdari.length();

	while ( getline( cin, cadena ) )
	{
		palindrome = mirror = true;

		for ( i = 0, j = cadena.length() - 1 ; i < j and ( palindrome or mirror ); ++i, --j )
		{
			while ( cadena[i] == ' ' or cadena[i] == '\t' )

				i++;
			
			while ( cadena[j] == ' ' or cadena[j] == '\t' )

				j--;

			if ( palindrome and cadena[i] != cadena[j] )

				palindrome = false;

			if ( mirror )

				for( int k = 0; k < mida; ++k )

					if( cadena[i] == abcdari[k] )

						if( cadena[j] != invertt[k] )
						{
							mirror = false;
							break;
						}
		}

		cout << cadena;

		if( palindrome and mirror ) 
		{
			cout << " -- is a mirrored palindrome.\n"  << endl;
			continue;

		} else if( palindrome ) 
		{
			cout << " -- is a regular palindrome.\n" << endl;
			continue;

		} else if( mirror ) 
		{
			cout << " -- is a mirrored string.\n" << endl;
			continue;

		} else
		
			cout << " -- is not a palindrome.\n" << endl;
	}
}