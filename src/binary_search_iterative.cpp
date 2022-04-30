#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& arr, int search_elem) const {

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).

    int left_border = 0;
    int right_border = static_cast<int>(arr.size() - 1);
    int medium = (right_border + left_border)/2;
    while (left_border <= right_border) {
      if (arr[medium] == search_elem) {
        return medium;
      }
      if (search_elem < arr[medium]) {
        right_border = medium - 1;
      }
      left_border = medium + 1;
    }
    return std::nullopt;
  }

}  // namespace assignment