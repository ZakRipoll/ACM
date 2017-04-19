#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
  map <string, int> l;

  int t, x;
  char c;
  string s;

  cin >> t;

  for (size_t i = 0; i < t; i++)
  {
    l["HHH"] = 0;
    l["TTT"] = 0;
    l["TTH"] = 0;
    l["THT"] = 0;
    l["THH"] = 0;
    l["HTT"] = 0;
    l["HTH"] = 0;
    l["HHT"] = 0;

    cin >> x >> c;

    getline( cin, s );

    s = c + s;

    for(int j = 0; j < 38; j++)
    {
      l[s.substr(j, 3)] += 1;
    }

    cout << x;

    for(map< string, int >::reverse_iterator it = l.rbegin(); it != l.rend(); ++it)
    {
        cout << " " << it->second;
    }

    cout << endl;
  }

  return 0;
}
