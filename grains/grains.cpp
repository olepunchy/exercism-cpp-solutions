#include "grains.h"

namespace grains {

    unsigned long long square(int squares) {
        return 1ULL << (squares - 1);
    }

    unsigned long long total() {
        return 0ULL - 1;
    }

}  // namespace grains
