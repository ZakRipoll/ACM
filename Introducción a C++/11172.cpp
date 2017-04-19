#include <iostream>

int main() {

  unsigned int loop;
  long int first, last;

  std::cin >> loop;

  for ( int i = 0; i < loop; ++i ) 
  {
    std::cin >> first >> last;

    if ( first == last )
    {
      std::cout << "=" << std::endl;
      continue;
    }
    else if ( first > last )
    {
      std::cout << ">" << std::endl;
      continue;
    }
    else 
      std::cout << "<"  << std::endl;
  }
}