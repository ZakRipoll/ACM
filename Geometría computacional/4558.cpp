#include <iostream>
#include <vector>
#include <algorithm>

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
typedef int T;     // posiblemente cambiar a double
typedef pair<T,T> P;
T xp(P p, P q, P r) {
  return (q.X-p.X)*(r.Y-p.Y) - (r.X-p.X)*(q.Y-p.Y);
}
struct Vect {
  P p, q;  T dist;
  Vect(P &a, P &b) {
    p = a;  q = b;
    dist = SQ(a.X - b.X) + SQ(a.Y - b.Y);
  }
  bool operator<(const Vect &v) const {
    T t = xp(p, q, v.p);
    return t < 0 || t == 0 && dist < v.dist;
  }
};

struct ordre{
  inline bool operator() (const pair<T,T>& primer, const pair<T,T>& segon){
    return primer.Y > segon.Y or ( primer.Y == segon.Y and primer.X < segon.X);
  }
};

vector<P> convexhull(vector<P> v) { // v.SZ >= 2
  sort(v.begin(), v.end(), ordre());
  vector<Vect> u;
  for (int i = 1; i < (int)v.SZ; i++)
    u.PB(Vect(v[i], v[0]));
  sort(u.begin(), u.end());
  reverse(u.begin(), u.end());
  vector<P> w(v.SZ, v[0]);
  int j = 1;  w[1] = u[0].p;
  for (int i = 1; i < (int)u.SZ; i++) {
    T t = xp(w[j-1], w[j], u[i].p);
    for (j--; t > 0 && j > 0; j--)
      t = xp(w[j-1], w[j], u[i].p);
    j += t < 0 ? 2 : 1;
    w[j] = u[i].p;
  }
  w.resize(j+1);
  return w;
}

int main() {
	int n,a,b,x,y;
	cin >> n;
	for( int i = 0; i < n; ++i){
		cin >> a >> b;
		vector<P> v;
		for (int j = 0; j < b; ++j){
			cin >> x >> y;
			v.PB(MP(x, y));
		}
		vector<P> w = convexhull(v);
		cout << a << " " << w.SZ << endl;
		for (int j = 0; j < w.SZ; ++j){
				cout << "(" << w[j].X << ", " << w[j].Y << "),";
		}
    cout << endl;
	}
}
