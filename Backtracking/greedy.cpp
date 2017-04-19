#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char letras[4] = {'a', 'e', 'r', 's'};

int main() 
{
  string s(4, ' ');

  sort(letras, letras + 4);

  for (int i = 0; i < 4; ++i)

    s[i] = letras[i];

  cout << s << "\n";
}