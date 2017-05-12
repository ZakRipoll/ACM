#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int r, l, b, t, w, x;
vector <int> v, z;

bool sum( int i, int a ){
  for(;i<l; i++)
  {
    t = a + v[i];
    if( t < r && sum(i+1, t) ) {
      z.push_back(v[i]);
      return true;
    }
    else if ( t == r ) {
      w = i;
      z.push_back(v[i]);
      return true;
    }
  }
  w = i;
  return false;
}

int main(){
  int i, m, k;
  while(cin >> r){
    v.clear();
    //do{
      cin >> l;
      m = l;
      while(m--){
        cin >> i;
        v.push_back(i);
      }

      cout << "Sums of " << r << endl;

      for(int j = 0; j < l; j++) {
        if( v[j] == r ) cout << r << endl;
        else if( j < 0 && j < l-1 && v[j-1] == v[j ] ) continue;
        else{
          k = j+1;
          do{
            if( sum(k, v[j]) ){
              cout << v[j];
              while( !z.empty() )
              {
                cout << "+" << z.back() ;
                z.pop_back();
              }
              cout << endl;
            }
            k++;
          }while(w < l);
        }
      }
    //}while( v[i] )
  }
}
