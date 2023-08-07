#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "loja.hpp"

using namespace std;

int main()
{
  int N, R;
  cin >> N;
  while (N--)
  {
    cin >> R;

    std::vector<int> v(R);
    for (int i = 0; i < R; i++)
      cin >> v[i];

    cout << resolve(v) << endl;
  }
  return (0);
}
