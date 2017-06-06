#include <iostream>

using namespace std;

int v[1000], c[1000];

int main(){
  
  int a = 0, l, i, j = 1;

  for( int i = 0; i < 1000; i++)  c[i] = v[i] = 0;

  cin >> l;

  while( l-- ){

    cin >> i;

    if( v[i] == 0 )
      for( int e = a+1; e <= i; e++ ){
        v[e] = v[e-1] + e;
        c[e] = v[e] + c[e-1];
      }

    cout << j << ": " << i << " " << c[i] << endl;
    j++;
    a = i;
  }
}
