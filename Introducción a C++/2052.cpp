#include <iostream>

using namespace std;

int falco( int, int );

int main()
{
  int t, x, y;//, r, s;

  cin >> t;

  for( int i = 0; i < t; ++i )
  {
    cin >> x >> y;

    falco( x, y );
      /*cin >> x >> y;

      s = x == y + 2;

      if( x == y || s )
      {

      r = y % 2;

      cout << 2 * ( y + s - r ) + r;
    }

    else

      cout << "No Number";

     cout << endl;*/
  }
}

void falco( int x, int y )
{
  if(x!=y && x!=y+2)
    cout<<"No Number"<<endl;
  else if (x&1)
    cout<<x+y-1<<endl;
  else
    cout<<x+y<<endl;
}

void func()
{
int  r;
for( int i = 0; i < 12; ++i)
{
  r = i%2;
  cout << 2 * ( i-r ) + r << " ";

  if( r == 1 )
    cout << "  ";
}

cout << endl << "   ";

for( int i = 0; i < 12; ++i)
{
  r = i%2;
  cout << 2 * ( i+1-r ) + r << " ";

  if( r == 1 )
    cout << "  ";
}
}
