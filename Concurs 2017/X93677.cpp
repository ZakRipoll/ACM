#include <algorithm>
#include <cfloat>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <list>
#include <set>
#include <vector>

using namespace std;

#define X first
#define Y second
#define LI long long
#define MP make_pair
#define PB push_back
#define SZ size()
#define SQ(a) ((a)*(a))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define FOR(i,x,y) for(int i=(int)x; i<(int)y; i++)
#define RFOR(i,x,y) for(int i=(int)x; i>(int)y; i--)
#define SORT(a) sort(a.begin(), a.end())
#define RSORT(a) sort(a.rbegin(), a.rend())
#define IN(a,pos,c) insert(a.begin()+pos,1,c)
#define DEL(a,pos,cant) erase(a.begin()+pos,cant)

int main(){

  int d, s, p, pos, min, result;
  int M[200][200];
  int v[200];

  cin >> d;

  while( d-- ){

    result = 0;

    cin >> s;

    for( int i = 0; i <= s; i++ ){
      cin >> p;
      v[i] = p;
    }

    for( int i = 0; i < s; i++ )
      for( int j = i; j <= s; j++ )
        M[i][j] = v[j] * pow(10, j-i-1);

      int i;

      while( s ){
        for(i = 0; i < s; i++ ){
          if( i == 0 ){
            pos = 0;
            min = M[i][s];
          }
          else if(M[i][s] <= min){
            pos = i;
            min = M[i][s];
          }
      }
      result += min;
      s = pos;
    }
    cout << result << endl;
  }
}
