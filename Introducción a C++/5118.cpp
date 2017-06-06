#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  std::vector<string> v;
  string n;
  int l, r, z;

  cin >> l;
  z = l;

  for( int i = 0; i < l+1; i++){
    std::getline(cin, n);
    v.push_back(n);
  }

  cin >> l;

  for( int i = 0; i < l; i++){
    cin >> r;
    cout << "Rule " << r << ": " << ( ( 0 < r and r <= z ) ? v.at(r) : "No such rule" ) << endl;
  }
}
