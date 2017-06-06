#include <iostream>
#include <math.h>

using namespace std;

int loop( int i, bool s )
{
  int r, l, j = sqrt(i);
  r = l = 0;

  r = j*j - i;

  if(s && !r&1)
    j--;

  else if(!s && r&1)
    j--;

    r = j*j - i;

  while( true )
  {
    if(r == 0) break;

    l = loop( r, s );

    if(!l break;

    else if(l == -1) return -1;

    j--;
    j--;

    if( !j ) return -1;

    r = j*j - i;
  }
  if( 0 < j && j < i) cout << j << " X " << j << endl;
  return 0;
}

int main()
{
  int i;
  cin >> i;
  loop( i, i&1 );
}
