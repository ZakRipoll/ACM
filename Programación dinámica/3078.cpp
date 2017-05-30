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
  int n, c, a, b;

  while(cin >> n && n ){
    c = 1;
    a = n%10;
    n/=10;
    a += n%10 * 10;
    if( a < 26 ) c++;
    while( n/=10 ){
      b = a/10+n%10*10;
      cout << b << " " << a << endl;
      if( a < 26 and b < 26 ) c++;
      else if( b > 26 and a < 26 ) c >>= 1;
      else if( b > 26 ) c;
      a = b;
    }
    cout << c << endl;
  }
}
