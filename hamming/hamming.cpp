#include "hamming.h"
#include <stdexcept>

using std::string;

namespace hamming {

int compute(std::string first, std::string second) {

  int distance = 0;

  if (first.length() != second.length()) {
    // throw std::invalid_argument("Strings must be of equal length.");
    throw std::domain_error("Strings must be of equal length.");
  }

  int stringLength = static_cast<int>(first.length());

  for (int index = 0; index < stringLength; index++) {
    if (first[index] != second[index]) {
      distance++;
    }
  }

  return distance;
}

} // namespace hamming
