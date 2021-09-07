#include "raindrops.h"

namespace raindrops {

std::string convert(int number) {
    if (number % 7 == 0 && number % 5 == 0 && number % 3 == 0) {
        return std::string("PlingPlangPlong");
    }

    if (number % 7 == 0 && number % 5 == 0 && number % 3 != 0) {
        return std::string("PlangPlong");
    }

    if (number % 7 != 0 && number % 5 == 0 && number % 3 == 0) {
        return std::string("PlingPlang");
    }

    if (number % 7 == 0 && number % 5 != 0 && number % 3 == 0) {
        return std::string("PlingPlong");
    }

    if (number % 7 == 0) {
        return std::string("Plong");
    }

    if (number % 5 == 0) {
        return std::string("Plang");
    }

    if (number % 3 == 0) {
        return std::string("Pling");
    }

    return std::to_string(number);
}

}  // namespace raindrops
