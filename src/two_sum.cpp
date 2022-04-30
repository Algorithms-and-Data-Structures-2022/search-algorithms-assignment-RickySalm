#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int start = 0;
    int stop = static_cast<int>(arr.size() - 1);
    auto pair = std::make_pair(start, stop);
    while (start < stop) {
      if ((arr[pair.first] + arr[pair.second]) == sum) {
        return pair;
      }
      if ((arr[pair.first] + arr[pair.second]) < sum) {
        pair.first++;
      }
      else if ((arr[pair.first] + arr[pair.second]) > sum) {
        pair.second--;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment