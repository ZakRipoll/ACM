#include <iostream>

using namespace std;

int main(){

  int v[2] = {4, 7};

  int d, A, B, a, b, j, k;

  cin >> d;

  while( d-- ){

    k = j = a = b = 1;

    cin >> A >> B;

    while( A/=10 ){
       a++;
       A%=10;
    }
    
    while( B/=10 ){
      b++;
      b%=10;
    }

    j <<= (a >= b) ? a : b;

    k <<= ((a >= b) ? b : a) -1;

    cout << a << " " << b << " " << j-k << " " << endl;

  }
}
