#include <iostream>
#include <vector>

using namespace std;

vector<int> res(1000001, -1);

int fibonacci(int n) {
  if (res[n] > 0) return res[n];
  else return res[n] = fibonacci(n-2) + fibonacci(n-1);
}

int main() {
  res[0] = res[1] = 1;
  cout << fibonacci(40) << endl;
}