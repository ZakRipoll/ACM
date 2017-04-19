#include <iostream>

using namespace std;

int recus( int );

int main(){
      int n;
      while( cin >> n && n )
        cout << recus( n ) << endl;
}

int recus( int i )
{
    if( !i )
      return 0;

    return i*i + recus(--i);
}
