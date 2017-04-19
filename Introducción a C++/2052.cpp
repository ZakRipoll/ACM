  #include <iostream>

  using namespace std;

  int main()
  {
    int t, x, y, r, s;

    cin >> t;

    for( int i = 0; i < t; ++i )
    {
        cin >> x >> y;

        s = x == y + 2;

        if( x == y || s )
        {

        r = y % 2;

        cout << 2 * ( y + s - r ) + r;
      }

      else

        cout << "No Number";

       cout << endl;
    }
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
