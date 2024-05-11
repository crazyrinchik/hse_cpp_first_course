#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
  std::vector<int> v = {1, 2, 3, 4, 5, 5, 6};
  std::vector<int> sub = {3, 4};
  std::vector<int> candidates = {4, 5, 6};

  // std::find
  auto it_find = std::find(v.begin(), v.end(), 3);
  if (it_find != v.end()) {
    std::cout << "Found 3 at position: " << std::distance(v.begin(), it_find) << std::endl;
  }

  // std::find_if
  auto it_find_if = std::find_if(v.begin(), v.end(), [](int i) { return i % 2 == 0; });
  std::cout << "First even number: " << *it_find_if << std::endl;

  // std::find_if_not
  auto it_find_if_not = std::find_if_not(v.begin(), v.end(), [](int i) { return i % 2 == 0; });
  std::cout << "First odd number: " << *it_find_if_not << std::endl;

  // std::find_end
  auto it_find_end = std::find_end(v.begin(), v.end(), sub.begin(), sub.end());
  std::cout << "Subsequence {3, 4} found ending at position: " << std::distance(v.begin(), it_find_end) + sub.size() - 1 << std::endl;

  // std::find_first_of
  auto it_find_first_of = std::find_first_of(v.begin(), v.end(), candidates.begin(), candidates.end());
  std::cout << "First of candidates found: " << *it_find_first_of << std::endl;

  // std::adjacent_find
  auto it_adjacent_find = std::adjacent_find(v.begin(), v.end());
  std::cout << "First pair of adjacent elements: " << *it_adjacent_find << " and " << *(it_adjacent_find + 1) << std::endl;

  // std::count
  int cnt = std::count(v.begin(), v.end(), 5);
  std::cout << "Number 5 appears " << cnt << " times" << std::endl;

  // std::count_if
  int cnt_if = std::count_if(v.begin(), v.end(), [](int i) { return i % 2 == 0; });
  std::cout << "Even numbers count: " << cnt_if << std::endl;

  // std::search
  auto it_search = std::search(v.begin(), v.end(), sub.begin(), sub.end());
  std::cout << "Pattern {3, 4} found starting at position: " << std::distance(v.begin(), it_search) << std::endl;

  // std::search_n
  auto it_search_n = std::search_n(v.begin(), v.end(), 2, 5);// Search for two consecutive 5s
  std::cout << "Two consecutive 5s found starting at position: " << std::distance(v.begin(), it_search_n) << std::endl;

  // Binary search algorithms require sorted vector
  std::sort(v.begin(), v.end());

  // std::lower_bound
  auto it_lower_bound = std::lower_bound(v.begin(), v.end(), 3);
  std::cout << "Lower bound for 3: " << *it_lower_bound << std::endl;

  // std::upper_bound
  auto it_upper_bound = std::upper_bound(v.begin(), v.end(), 3);
  std::cout << "Upper bound for 3: " << *it_upper_bound << std::endl;

  // std::equal_range
  auto p_equal_range = std::equal_range(v.begin(), v.end(), 3);
  std::cout << "Equal range for 3: [" << *p_equal_range.first << ", " << *(p_equal_range.second - 1) << "]" << std::endl;

  // std::binary_search
  bool found_binary_search = std::binary_search(v.begin(), v.end(), 3);
  std::cout << "3 " << (found_binary_search ? "found" : "not found") << " in sorted vector." << std::endl;

  return 0;
}
