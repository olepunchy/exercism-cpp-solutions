#include "difference_of_squares.h"

namespace difference_of_squares {

    long square_of_sum(int number) {

       long total = 0;

       for (int counter = 1; counter <= number; counter++) {
           total += counter;
       }

        return total * total;
    }

    long sum_of_squares(int number) {

        long total = 0;

        for (int counter = 1; counter <= number; counter++) {
            total += counter * counter;
        }

        return total;
    }

    long difference(int number) {
        return square_of_sum(number) - sum_of_squares(number);
    }
}  // namespace difference_of_squares
