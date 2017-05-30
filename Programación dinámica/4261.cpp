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
  vector<int> v, b;
  int m[100][100];
  int n, p, s, k, j, mi;

  while(cin >> n && n){

    FOR(a,0,n)
      FOR(o,0,n)
        m[a][o] = 0;

    v.clear();

    FOR(e,0,n){
      cin >> p;
      v.push_back(p);
    }

    FOR(i,0,n){
      s = 0;
      FOR(j,i,n){
        s += v.at(j);
        if (s >= 200) continue;
        m[i][j] = pow((s - 100), 2);
      }
    }

    FOR(i,0,n){
      FOR(j,0,n)
        cout << m[i][j] << " ";
      cout << endl;
    }

    j = k = n-1;
    p = 0;
    b.push_back(n);
    while(k > 0){
      mi = m[k][j];
      s = j;
      for(; j >= 0 && m[j][k] > 0; j--){
        if( m[j][k] < mi ){
          mi = m[j][k];
          s = j;
        }
      }
      b.push_back(s);
      p += mi;
      j = k = s-1;
    }

    cout << p << endl;

    while( !b.empty() ){
      cout << b.back() << " ";
      b.pop_back();
    }
    cout << endl << endl;
  }
}
