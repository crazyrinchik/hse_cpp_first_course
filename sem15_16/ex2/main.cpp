#include <fstream>
#include <iostream>
#include <vector>
// STL

int main()
{
  std::vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);
  vec.push_back(40);
  vec.push_back(50);
  std::cout << *vec.begin() << std::endl;
  std::cout << *(vec.begin() + 2) << std::endl;
  for (std::vector<int>::iterator it = vec.begin();
       it != vec.end(); ++it)
  {
    std::cout << *it << ' ';
  }
  std::cout << std::endl;
  for (std::vector<int>::iterator it = vec.end() - 1; it != vec.begin() - 1;
       it--)
  {
    std::cout << *it << ' ';
  }
  std::cout << std::endl;
  for (std::vector<int>::reverse_iterator it = vec.rbegin();
       it != vec.rend(); ++it)
  {
    std::cout << *it << ' ';
  }
  std::cout << std::endl;
  std::cout << vec[3] << std::endl;
  return 0;
}
