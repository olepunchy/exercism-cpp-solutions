#include "pangram.h"

#include <algorithm>
#include <regex>

const int alphabet_length = 26;
const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";

namespace pangram {

bool is_pangram(const std::string& input) {
    // Input is empty or less than length of alphabet, return false.
    if (input.empty() || input.size() < alphabet_length) {
        return false;
    }

    const std::regex regex("[^a-zA-Z]");

    std::string result = std::regex_replace(input, regex, "");

    // Input after regex is less than length of alphabet, return false.
    if (result.size() < alphabet_length) {
        return false;
    }

    std::transform(result.begin(), result.end(), result.begin(), ::tolower);

    bool success = std::all_of(
        begin(alphabet), end(alphabet),
        [&result](auto& c) { return result.find(c) != std::string::npos; });

    return success;
}

}  // namespace pangram
