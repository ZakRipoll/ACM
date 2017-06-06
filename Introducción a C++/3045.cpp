#include <iostream>

using namespace std;

int main(){
  int l, a, r, d;

  while(cin >> l and l){
    cout << l;
    l--;
    a = d = r = 1;
    while( l-- ){
      if( r == d ){
          d++;
          r=0;
      }
      r++;
      a += d;
    }
    cout << " " << a << endl;
  }
}
