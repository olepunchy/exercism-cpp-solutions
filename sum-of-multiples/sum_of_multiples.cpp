#include "sum_of_multiples.h"

#include <cstddef>

namespace sum_of_multiples {

    int to(const std::vector<int> &multiples, int limit) {
        if (limit <= 0) {
            return 0;
        }

        if (multiples.empty()) {
            return 0;
        }

        int total = 0;

        for (int index = 0; index < limit; index++) {
            for (auto multiple : multiples) {
                if (index % multiple == 0) {
                    total += index;
                    break;
                }
            }
        }

        return total;
    }
}  // namespace sum_of_multiples
