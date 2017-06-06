#include <iostream>

using namespace std;

int main(){
  int l, X, Y;

  cin >> l;

  for( int i = 0; i < l; i++ ){
    cin >> X >> Y;
    cout << ( ( X < Y ) ? "NO" : "MMM" ) << " BRAINS" << endl;
  }
}
