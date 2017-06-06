#include <iostream>
#include <string>

using namespace std;

int main(){
  int l, b, g;
  string n;

  cin >> l;

  l++;

  std::getline(cin, n);

  while( l-- != 1 ){
    b = g = 0;

    std::getline(cin, n);

    for( int i = 0; i < n.length() ; i++){
      if( !(n[i] - 'b') or !(n[i] - 'B') ) b++;
      else if( !(n[i] - 'g') or !(n[i] - 'G') ) g++;
    }

    cout << n << " is ";

    b -= g;

    if( !b ) cout << "NEUTRAL";
    else if ( b < 0) cout << "GOOD";
    else cout << "A BADDY";

    cout << endl;
  }
}
