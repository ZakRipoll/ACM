#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
  float s;
  int a[10];
  vector<int> v;
  int m;

  while(cin >> s){

    for( int i = 0; i < 10; i++ ) a[i]=0;

    do{
      m = (int) s%10;
      a[m]++;
      v.push_back(m);
      s/=10;
    }while(s>0);

    for( int i = v.size()-1; i >= 0;  --i)
      cout << v[i];
    cout << endl;

    for( int i = 0; i < 10; i++ ) cout << a[i];
  }
}

/*
1) 2210102960 -> 2210101960 -> 2210100960 -> 2210109960 ->
2) 2210199960 -> 2210099960 ->
3) 2210099860 -> 2210099880 -> 2210099887
*/
