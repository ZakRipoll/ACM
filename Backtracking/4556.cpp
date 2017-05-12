#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int l, u;
  string s, n;
  cin >> l;

  for( int i = 0; i < l; ++i){
    cin >> u >> s;
    n = s;
    next_permutation( s.begin(), s.end() );
    if( n > s ) s = "BIGGEST";
    cout << u << " " << s << endl;
  }
}
