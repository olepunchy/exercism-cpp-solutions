#include "scrabble_score.h"

#include <algorithm>
#include <string>

using namespace std;

namespace scrabble_score {

    int score(string input) {
        int total = 0;

        std::transform(begin(input), end(input), begin(input), ::toupper);

        for (size_t index = 0; index < input.size(); index++) {
            char letter = input[index];

            switch (letter) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                case 'L':
                case 'N':
                case 'R':
                case 'S':
                case 'T':
                    total++;
                    break;

                case 'D':
                case 'G':
                    total += 2;
                    break;

                case 'B':
                case 'C':
                case 'M':
                case 'P':
                    total += 3;
                    break;

                case 'F':
                case 'H':
                case 'V':
                case 'W':
                case 'Y':
                    total += 4;
                    break;

                case 'K':
                    total += 5;
                    break;

                case 'J':
                case 'X':
                    total += 8;
                    break;

                case 'Q':
                case 'Z':
                    total += 10;
                    break;

                default:
                    break;
            }
        }

        return total;
    }

}  // namespace scrabble_score
