#include <iostream>
#include <vector>

using namespace std;

#define c first
#define p second

#define MIN(a,b) ((a)<(b)?(a):(b))

#define FOR(i,x,y) for(int i=(int)x; i<(int)y; i++)
#define RFOR(i,x,y) for(int i=(int)x; i>(int)y; i--)

pair<unsigned, unsigned> M[16][1<<15];
vector<int> v;

int main(){

  int n, c, co, k, vida, e, j1, ac;
  unsigned pos, p;

  cin >> n;

  while(n--){
    v.clear();

    cin >> c >> k;

    co = 1;

    co <<= c;

    for( int pos = 0; pos < co; pos++){
      cin >> p;
      M[0][pos] = make_pair((unsigned)pos+1, (unsigned)p);
    }

    co >>= 1;

    FOR(i, 0, c){
      FOR(j, 0, co){
        j1 = j<<1;
        vida = M[i][j1].p - M[i][j1+1].p;

        if( vida < 0 ) j1++, vida=-vida;

        M[i+1][j].p = MIN(vida+k, M[0][M[i][j1].c-1].p);
        M[i+1][j].c = M[i][j1].c;
      }
      co >>= 1;
    }

    e = 0;

    ac = M[c][e].c;

    RFOR(i, c, 0){
      if(ac == M[i-1][e].c){
        v.push_back(M[i-1][e+1].c);
        e*=2;
      }
      else{
        v.push_back(M[i-1][e].c);
        e++, e<<=1;
      }
    }

    cout << ac << endl;

    RFOR(i, c-1, -1){
      cout << v[i];
      if( i )
        cout << " ";
    }
    cout << endl;
  }
}
