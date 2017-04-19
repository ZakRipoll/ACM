#include <iostream>

using namespace std;

void imprimir( const int result, const int i ){

	cout  << "Case " << i + 1  << ": " << result << endl;
}

int main() {

	unsigned loop, first, medium, last, max, result;

	cin >> loop;

	for ( int i = 0; i < loop; ++i ) 
	{
		cin >> first >> medium >> last;

		if( first > medium )
		{
			max = first;
			result = medium;

		}else if( first < medium )
		{
			max = medium;
			result = first;
			
		}else
		{
			imprimir( medium, i );
			continue;
		}

		if( last > max )
		{	
			imprimir( max, i );
			continue;

		}else if( last < max )
		{
			if( last > result)
			{
				imprimir( last, i );
				continue;
			}else
			{
				imprimir( result, i );
				continue;
			}
		}else
		{
			imprimir( max, i );
			continue;
		}
	}
}