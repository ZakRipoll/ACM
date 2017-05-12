#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int loop( string s, int i ){

  if( s.empty() ) return 0;

  return (int) s[i] - '0' - 48 + loop( s.substr(i, s.length()), i++ );
}

int main(){
  string s;
  while( cin >> s)
    cout << loop(s, 0) << endl;
}
