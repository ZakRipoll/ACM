#include <stdio.h>
#include <iostream>

using namespace std;

int i;

int n( int j )
{
	int e = j * 10 + 4, c = 0;
	if ( e <= i )
		c = 1 + n ( e );
	e += 3;
	if ( e <= i )
		c += 1 + n ( e );
	return c;
}

int main()
{
	while( cin >> i )
		cout << i << " " << n( 0 ) << endl;
	return 0;
}
