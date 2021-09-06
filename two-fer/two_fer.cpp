#include "two_fer.h"

#include <iostream>

namespace two_fer {

const std::string two_fer() {
  // Empty argument message
  return "One for you, one for me.";
}

const std::string two_fer(std::string name) {
  // Single argument message
  return std::string("One for ") + name + std::string(", one for me.");
}

} // namespace two_fer
