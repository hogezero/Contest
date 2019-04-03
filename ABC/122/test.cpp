#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
  std::vector<int> v = {1, 2, 3};

  decltype(v)::const_iterator first = std::cbegin(v);
  decltype(v)::const_iterator last = std::cend(v);

  std::for_each(first, last, [](const int& x) {
    std::cout << x << std::endl;
  });
}