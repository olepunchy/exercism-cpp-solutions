#include "acronym.h"

#include <algorithm>
#include <sstream>

namespace acronym {

std::string acronym(std::string input) {

  if (input.size() == 0) {
    return "";
  }

  std::transform(begin(input), end(input), begin(input), ::toupper);

  std::stringstream stringStream(input);
  char delimiter = ' ';
  std::string token, result;

  while (std::getline(stringStream, token, delimiter)) {

    auto dashCount = std::count(begin(token), end(token), '-');

    if (dashCount > 0) {
      std::string splitToken;
      std::stringstream innerStream(token);

      while (std::getline(innerStream, splitToken, '-')) {
        result += splitToken[0];
      }
    } else {
      result += token[0];
    }
  }

  return result;
}

} // namespace acronym
