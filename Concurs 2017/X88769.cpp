#include <iostream>

using namespace std;

int main(){
  int d, A, B, Ca, Cb;

  cin >> d;

  while( d-- ){

    cin >> A >> B >> Ca >> Cb;

    if( !Ca and !Cb ) {
      cout << "Both" << endl;
      continue;
    }

    while( A > 0 and B > 0){
      A -= Ca;
      B -= Cb;
    }

    if(A <= 0 and B <= 0) cout << "None" << endl;
    else if(A > B)cout << "Alice" << endl;
    else if(A < B) cout << "Bob" << endl;
  }
}
