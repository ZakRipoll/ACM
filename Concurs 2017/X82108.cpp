#include <iostream>
#include <vector>

using namespace std;

int main(){
  int d, s, p, sum, actual, pointer;
  std::vector<int> v;

  cin >> d;

  while( d-- ){
    actual = pointer = sum = 0;
    cin >> s;
    for( int i = 0; i < s; i++ ){
      cin >> p;
      v[i] = p;
    }

    for( int i = 1; i < s-1; i++ ){
      sum = v[i-1] * v[i] * v[i+1];
      if( sum > actual ){
        sum = actual;
        pointer = i;
      }
    }

  }
}
