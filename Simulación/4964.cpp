#include <iostream>

using namespace std;

int main(){
  int a, b, c;

  do{
    cin >> a >> b >> c;

    if( !a and !b and !c ) break;

    if( c == b+(b-a) ) cout << "AP " << c+(b-a);
    else cout << "GP " << c*(b/a);

    cout << endl;

  }while(true);
}
